// memory-mapped I/O addresses
# GPIO_SWs   = 0x80001400
# GPIO_LEDs  = 0x80001404
# GPIO_INOUT = 0x80001408

.globl main

debounce_delay:
  li s2, 0x400000
debounce_delay_decrement:
  addi s2, s2, -1               # decrement counter
  bne  s2, zero, debounce_delay_decrement
  beq  s2, zero, check_button

delay:
  addi s2, s4, 0                # load delay counter
delay_decrement:
  addi s2, s2, -1               # decrement counter
  bne  s2, zero, delay_decrement
  beq  s2, zero, continue_count

main:
  li t0, 0x80001400                 # base address of GPIO memory-mapped registers
  li t1, 0xFFFF                     # set direction of GPIOs
                                    # upper half = switches (inputs)  (=0)
                                    # lower half = outputs (LEDs)     (=1)
  sw t1, 8(t0)                      # GPIO_INOUT = 0xFFFF

  li t2, 0x80001800                 # base address of GPIO MMIO for Push buttons
  li t3, 0x0000                     # Set direction of GPIOs as inputs
  sw t3, 8(t2)                      # GPIO_INOUT = 0x0000

  li s3, 0x10000                    # s3 = max count
  li s4, 0x1000000                  # s4 = LED ON-OFF interval
  li s5, 0x100000                   # s5 = lowest value blink interval can be
  li t4, 0x1                        # t4 = center button press value
  li t5, 0x10                       # t5 = up button press value

  j repeat

change_speed:
  srli s4, s4, 2                    # right shift s4 by 2 --> change delay loop value
  blt s4, s5, reset_interval        # if blink interval is smaller than limit, reset blink interval
  bge s4, s5, ctnue                 # else continue
reset_interval:
  li s4, 0x1000000
ctnue:
  j repeat

reset_count:
  li s1, 0                          # s0 = current binary count

repeat:
  sw s1, 4(t0)                      # Output count to LEDs
  j delay

continue_count:
  addi s1, s1, 0x1                  # increment count by 1
  bge s1, s3, reset_count           # max count reached, now restart from 0

read_buttons:
  lw t3, 0(t2)                      # read push buttons
  bne t3, zero, debounce_delay
check_button:
  beq t3, t4, change_speed          # change counting speed if BTNC is pressed
  beq t3, t5, reset_count           # reset count if BTNU is pressed
  j repeat