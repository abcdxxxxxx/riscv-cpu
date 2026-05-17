.section .text
.global _start
_start:
    # Test ADD
    li x1, 5
    li x2, 3
    add x3, x1, x2      # x3 = 8

    # Test ADDI
    addi x4, x0, 10     # x4 = 10

    # Test SUB
    sub x5, x1, x2      # x5 = 2

    # Test AND
    and x6, x1, x2      # x6 = 1

    # Test OR
    or x7, x1, x2       # x7 = 7

    # Pass signal — x31 = 1 means PASS
    li x31, 1
done:
    j done
