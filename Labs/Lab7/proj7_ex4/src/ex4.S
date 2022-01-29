#define SegDig_ADDR   0x80001038

# 7-segment display bit values for letters/numbers
#define SEG_OFF    0xFF
#define SEG_0      0xC0
#define SEG_1      0xF9
#define SEG_2      0xA4 
#define SEG_3      0xB0
#define SEG_4      0x99
#define SEG_5      0x92
#define SEG_6      0x82
#define SEG_7      0xF8
#define SEG_8      0x80
#define SEG_9      0x90
#define SEG_A      0x88
#define SEG_b      0x83
#define SEG_C      0xC6
#define SEG_d      0xA1
#define SEG_E      0x86
#define SEG_F      0x8E
#define SEG_G      0xC2
#define SEG_H      0x89
#define SEG_I      0xCF
#define SEG_J      0xF1
#define SEG_L      0xC7
#define SEG_n      0xAB
#define SEG_o      0xA3
#define SEG_P      0x8C
#define SEG_r      0xAF
#define SEG_S      0x92
#define SEG_t      0x87
#define SEG_U      0xC1
#define SEG_y      0x91

.globl main
main:
    li t1, SegDig_ADDR      # Load address of 7-seg displays

    # Load the message

    li t6, SEG_I
    sb t6, 7(t1)

    li t6, SEG_OFF
    sb t6, 6(t1)

    li t6, SEG_S
    sb t6, 5(t1)

    li t6, SEG_A
    sb t6, 4(t1)

    li t6, SEG_y
    sb t6, 3(t1)

    li t6, SEG_OFF
    sb t6, 2(t1)

    li t6, SEG_H
    sb t6, 1(t1)

    li t6, SEG_I
    sb t6, 0(t1)


next:	beq zero, zero, next

.end
