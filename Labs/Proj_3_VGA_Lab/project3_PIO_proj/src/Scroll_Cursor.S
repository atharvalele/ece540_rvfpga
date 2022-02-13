# #########################################
# Scroll sprite on VGA display using push
# buttons
#
# Author: Atharva Lele <atharva@pdx.edu>
# Date:   28 January 2022
# #########################################

#define GPIO_PB_MMIO_ADDR   0x80001800 
#define SPRITE_LOC_ADDR     0x80003000

.globl main

debounce_delay:
  li s2, 0x80000
debounce_delay_decrement:
  addi s2, s2, -1               # decrement counter
  bne  s2, zero, debounce_delay_decrement
  beq  s2, zero, check_button

sprite_up:
    addi s1, s1, -1                         # Subtract 1 to go up
    j sprite_loc_update

sprite_right:
    li t4, 0x00010000                       # Bitmask to add to shift right
    add s1, s1, t4
    j sprite_loc_update

sprite_down:
    addi s1, s1, 1                          # Add 1 to shift down
    j sprite_loc_update

sprite_left:
    li t4, 0x00010000                       # Bitmask to subtract to shift right
    sub s1, s1, t4
    j sprite_loc_update

sprite_reset:
    li s1, 0x000A000A
    j sprite_loc_update

sprite_loc_update:
    sw s1, 0(t0)
    j repeat

main:
    li t0, SPRITE_LOC_ADDR                  # Load sprite location register address
    lw s1, 0(t0)                            # Load sprite location register value
    
    li t2, GPIO_PB_MMIO_ADDR                # base address of GPIO MMIO for Push buttons
    li t3, 0x0000                           # Set direction of GPIOs as inputs
    sw t3, 8(t2)                            # GPIO_INOUT = 0x0000

    li s3, 0x10                             # Up button value                              
    li s4, 0x08                             # Right button value
    li s5, 0x04                             # Down button value
    li s6, 0x02                             # Left button value
    li s7, 0x01                             # Center button value

repeat:
read_buttons:
    lw t3, 0(t2)                            # read push buttons
    bne t3, zero, debounce_delay            # Carry out debouncing
    beq t3, zero, repeat                    # If no button is pressed, repeat loop
check_button:
    beq t3, s3, sprite_up                   # Move sprite up
    beq t3, s4, sprite_right                # Move sprite right
    beq t3, s5, sprite_down                 # Move sprite left
    beq t3, s6, sprite_left                 # Move sprite down
    beq t3, s7, sprite_reset                # Reset sprite to top left
    j repeat