// vga.sv: VGA Display Controller Peripheral
// Version: 1.0
// Author: Atharva Lele <atharva@pdx.edu>
//
// Version Details: 1.0: B&W Static Image Display Support

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

    // Sprite Control
    // row, column of the sprite correspond to its top left
    logic [11:0]     sprite_x;
    logic [11:0]     sprite_y;

    logic [3:0] sprite [3:0][3:0] = '{'{'1, '0, '0, '1},
                                      '{'0, '1, '1, '0},
                                      '{'0, '1, '1, '0},
                                      '{'1, '0, '0, '1}};

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
        // Assign data to sprite_x and sprite_y
        sprite_x <= wb_vga_reg[11:0];
        sprite_y <= wb_vga_reg[27:16];
        if (video_on == 1'b1)
        begin
            // Check if we are outputting sprite pixels
            // If we are, replace the VGA data with sprite data
            if ((pixel_row >= sprite_x) && (pixel_row < (sprite_x + 4)) &&
                (pixel_column >= sprite_y) && (pixel_column < (sprite_y + 4)) && 
                (sprite_x >= 0) && ((sprite_x + 4) < 640) &&
                (sprite_y >= 0) && ((sprite_y + 4) < 480))
            begin
                    VGA_R <= (sprite[pixel_row - sprite_x][pixel_column - sprite_y] | vga_data);
                    VGA_G <= (sprite[pixel_row - sprite_x][pixel_column - sprite_y] | vga_data);
                    VGA_B <= (sprite[pixel_row - sprite_x][pixel_column - sprite_y] | vga_data);
            end
            else begin
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
            wb_vga_reg = 32'h00060006;
            wb_vga_ack_ff = 0 ;
        end
        else begin
            wb_vga_reg = wb_vga_ack_ff && i_wb_we ? i_wb_dat : wb_vga_reg;
            wb_vga_ack_ff = ! wb_vga_ack_ff & i_wb_stb & i_wb_cyc;
        end
    end
    
endmodule
