// memory-mapped I/O addresses
# GPIO_SWs   = 0x80001400
# GPIO_LEDs  = 0x80001404
# GPIO_INOUT = 0x80001408

.globl main

delay:
  li   s2, 0x700000             # load delay counter
delay_decrement:
  addi s2, s2, -1               # decrement counter
  bne  s2, zero, delay_decrement
  beq  s2, zero, continue_scroll

main:
  li t0, 0x80001400             # base address of GPIO memory-mapped registers
  li t1, 0xFFFF                 # set direction of GPIOs
                                # upper half = switches (inputs)  (=0)
                                # lower half = outputs (LEDs)     (=1)
  sw t1, 8(t0)                  # GPIO_INOUT = 0xFFFF

  li t3, 0x10000                # Leftmost LED is lit up
  li t4, 0xFFFF                 # All LEDs are lit up

reset:
  li s1, 0                      # Load S1 with 0
  
add_led:
  slli s1, s1, 1                # leftshift pattern by 1
  ori  s1, s1, 1                # Add an LED
  beq  s1, t4, reset            # Fully reset the pattern
  mv t1, s1

repeat:
  sw   t1, 4(t0)                # write value to LEDs: GPIO_LEDs = t1
  j    delay

continue_scroll:
  slli t1, t1, 1                # Move pattern to the left
  and t2, t1, t3                # check if reached leftmost position
  blt  zero, t2, add_led        # reset if reach zero
  j    repeat                   # repeat loop
