// vga.sv: VGA Display Controller Peripheral
// Version: 1.1
// Author: Atharva Lele <atharva@pdx.edu>
//
// Version Details:
// 1.0: B&W Static Image Display Support
// 1.1: Image processing techniques

module vga_controller (
    input              clock, reset,
    output reg [3:0]   VGA_R,
    output reg [3:0]   VGA_G,
    output reg [3:0]   VGA_B,
    output reg         VGA_HS, VGA_VS,
    input wire         wb_clk,
    input wire         wb_rst,
    input wire [5:0]   i_wb_adr,
    input wire [31:0]  i_wb_dat,
    input wire [3:0]   i_wb_sel,
    input wire 	       i_wb_we,
    input wire 	       i_wb_cyc,
    input wire 	       i_wb_stb,
    output reg [31:0]  o_wb_rdt,
    output reg 	       o_wb_ack
);

    // Internal wire
    logic  [18:0] pixel_num_wire;
    logic [11:0] pixel_row;
    logic [11:0] pixel_column;
    logic [3:0]  vga_data;
    logic video_on;

    // Registers needed for Robert's Cross
    reg [3:0] pix_row_save[640:0] ;
    reg [3:0] Gx, Gy, RC;
    logic [10:0] i;

    // Block RAM module instance
    blk_mem_vga vga_image_mem (
        .clka(clock),    // input wire clka
        .wea(1'b0),      // input wire [0 : 0] wea
        .addra(19'b0),  // input wire [18 : 0] addra
        .dina(4'b0),    // input wire [3 : 0] dina
        .clkb(clock),    // input wire clkb
        .addrb(pixel_num_wire),  // input wire [18 : 0] addrb
        .doutb(vga_data)  // output wire [3 : 0] doutb
    );

    // Display Timing Generator Instance
    dtg vga_dtg (
        .clock(clock),
        .rst(1'b0),
        .horiz_sync(VGA_HS),
        .vert_sync(VGA_VS),
        .video_on(video_on),
        .pixel_row(pixel_row),
        .pixel_column(pixel_column),
        .pix_num(pixel_num_wire)
    );

    // Assign data to VGA
    always_ff @(posedge clock) begin : vga_data_assign
        if (video_on == 1'b1) begin
            // Assign actual data
            if (wb_vga_reg[1] === 1'b1) begin
                // Toggle test image vertical bars generated from replicating bit4 of pixel column
                if (pixel_column[4] === 1'b1) begin
                    VGA_R <= 4'b0;
                    VGA_G <= 4'b0;
                    VGA_B <= 4'b0;
                end
                else begin
                    VGA_R <= vga_data;
                    VGA_G <= vga_data;
                    VGA_B <= vga_data;
                end
            end
            else if (wb_vga_reg[2] === 1'b1) begin
                // Toggle Threshold image if greyscale value is > {switches[7:5],switch2}
                if (vga_data > {wb_vga_reg[7:5], wb_vga_reg[2]}) begin
                    VGA_R <= 4'b0;
                    VGA_G <= 4'b0;
                    VGA_B <= 4'b0;
                end
                else begin
                    VGA_R <= 4'b1111;
                    VGA_G <= 4'b1111;
                    VGA_B <= 4'b1111;
                end
            end
            else if ((wb_vga_reg[3] === 1'b1) || (wb_vga_reg[4] === 1'b1)) begin
                // Save data for Robert's cross
                for (i = 640; i > 0; i = i - 1) begin
                    pix_row_save[i] <= pix_row_save[i-1];
                end

                // Compute Gx, Gy, save pix_row
                if (vga_data > pix_row_save[640])
                    Gx <= vga_data - pix_row_save[640];
                else
                    Gx <= pix_row_save[640] - vga_data;
                
                if (pix_row_save[0] > pix_row_save[639])
                    Gy <= pix_row_save[0] - pix_row_save[639];
                else
                    Gy <= pix_row_save[639] - pix_row_save[0];
                

                // Robert's cross
                RC <= Gx + Gy;

                // Save data for row
                pix_row_save[0] <= vga_data;

                // Assign data based on switch
                if (wb_vga_reg[3] === 1'b1) begin
                // Roberts cross edge detection greyscale image
                    VGA_R <= RC;
                    VGA_G <= RC;
                    VGA_B <= RC;
                end
                else begin // if (wb_vga_reg[4] === 1'b1)
                // Roberts cross greyscale image thresholded against {switches[7:5],switch4}
                    if (RC > {wb_vga_reg[7:5], wb_vga_reg[4]}) begin
                        VGA_R <= 4'b1111;
                        VGA_G <= 4'b1111;
                        VGA_B <= 4'b1111;
                    end
                    else begin
                        VGA_R <= 4'b0;
                        VGA_G <= 4'b0;
                        VGA_B <= 4'b0;
                    end
                end
            end
            else begin
                // Plain old image
                VGA_R <= vga_data;
                VGA_G <= vga_data;
                VGA_B <= vga_data;
            end
        end
        else begin
            VGA_R <= 4'b0;
            VGA_G <= 4'b0;
            VGA_B <= 4'b0;
        end
    end: vga_data_assign

    // Wishbone Bus Signals
    reg wb_vga_ack_ff;
    reg [31:0] wb_vga_reg;

    assign o_wb_ack = wb_vga_ack_ff;
    assign o_wb_rdt = wb_vga_reg;
    
    always @(posedge wb_clk, posedge wb_rst) begin
        if (wb_rst) begin
            wb_vga_reg = 32'h00000000;
            wb_vga_ack_ff = 0 ;
        end
        else begin
            wb_vga_reg <= wb_vga_ack_ff && i_wb_we ? i_wb_dat : wb_vga_reg;
            wb_vga_ack_ff <= ! wb_vga_ack_ff & i_wb_stb & i_wb_cyc;
        end
    end
    
endmodule
