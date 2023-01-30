      .data
_a:   .WORD 123456
_b:   .WORD 0
      .text
      ADDI R1 R0 #12345    /* line 3 */
      ADDI R1 R0 #0
      LOAD R2 _a
      ADD R3 R0 R2
      STORE R2 _a
L3:   SUBI R0 R3 #0
      BEQ L2
      ANDBI R4 R3 #1
      ADD R1 R4 R1
      SHRI R3 R3 #1
      BT L3
L2:   ADDI R3 R1 #100
      ADD R1 R0 R3
      WRITE R1 0           /* line 4 */
      STORE R1 _b
      LOAD R2 _a
      SUBI R3 R2 #64       /* line 6 */
      STORE R2 _a
      ADDI R2 R3 #255
      ADDI R3 R0 #0
      ADD R4 R0 R2
L5:   SUBI R0 R4 #0
      BEQ L4
      ANDBI R2 R4 #1
      ADD R3 R2 R3
      SHRI R4 R4 #1
      BT L5
L4:   ADD R1 R0 R3
      WRITE R1 0           /* line 7 */
      ADDI R1 R0 #32       /* line 9 */
      WRITE R1 0           /* line 10 */
      STORE R1 _b
      HALT
