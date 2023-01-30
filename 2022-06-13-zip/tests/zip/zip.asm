      .data
_a:   .SPACE 5
_b:   .SPACE 6
_c:   .SPACE 12
_i:   .WORD 0
      .text
      ADDI R1 R0 #12345    /* line 4 */
      ADDI R1 R0 #0
      STORE R1 _i
L4:   LOAD R1 _i
      SUBI R2 R1 #5        /* line 5 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L5
      LOAD R1 _i
      ADDI R2 R1 #1        /* line 7 */
      MOVA R3 _a
      ADD R3 R3 R1
      ADD (R3) R0 R2
      ADDI R2 R1 #1        /* line 8 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L4                /* line 9 */
L5:   ADDI R1 R0 #0        /* line 11 */
      STORE R1 _i
L6:   LOAD R1 _i
      SUBI R2 R1 #6        /* line 12 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L7
      LOAD R1 _i
      ADDI R2 R1 #1        /* line 14 */
      MULI R3 R2 #10
      MOVA R2 _b
      ADD R2 R2 R1
      ADD (R2) R0 R3
      ADDI R3 R1 #1        /* line 15 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L6                /* line 16 */
L7:   ADDI R1 R0 #0        /* line 18 */
      STORE R1 _i
L8:   LOAD R1 _i
      SUBI R3 R1 #12       /* line 19 */
      STORE R1 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L9
      MOVA R3 _c           /* line 21 */
      LOAD R1 _i
      ADD R3 R3 R1
      ADDI R2 R0 #0
      ADD (R3) R0 R2
      ADDI R3 R1 #1        /* line 22 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L8                /* line 23 */
L9:   ADDI R3 R0 #0        /* line 25 */
      ADDI R2 R0 #0
L11:  SUBI R0 R3 #12
      BEQ L10
      SUBI R0 R2 #5
      BEQ L10
      SUBI R0 R2 #6
      BEQ L10
      MOVA R4 _a
      ADD R4 R4 R2
      ADD R5 R0 (R4)
      MOVA R4 _b
      ADD R4 R4 R2
      ADD R6 R0 (R4)
      MOVA R4 _c
      ADD R4 R4 R3
      ADD (R4) R0 R5
      ADDI R3 R3 #1
      SUBI R0 R3 #12
      BEQ L10
      MOVA R5 _c
      ADD R5 R5 R3
      ADD (R5) R0 R6
      ADDI R3 R3 #1
      ADDI R2 R2 #1
      BT L11
L10:  ADDI R1 R0 #0        /* line 26 */
      STORE R1 _i
L12:  LOAD R1 _i
      SUBI R3 R1 #12       /* line 27 */
      STORE R1 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L13
      MOVA R3 _c           /* line 29 */
      LOAD R1 _i
      ADD R3 R3 R1
      ADD R2 R0 (R3)
      WRITE R2 0
      ADDI R2 R1 #1        /* line 30 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L12               /* line 31 */
L13:  ADDI R2 R0 #0        /* line 33 */
      ADDI R3 R0 #0
L15:  SUBI R0 R2 #5
      BEQ L14
      SUBI R0 R3 #6
      BEQ L14
      SUBI R0 R3 #12
      BEQ L14
      MOVA R6 _b
      ADD R6 R6 R3
      ADD R5 R0 (R6)
      MOVA R6 _c
      ADD R6 R6 R3
      ADD R4 R0 (R6)
      MOVA R6 _a
      ADD R6 R6 R2
      ADD (R6) R0 R5
      ADDI R2 R2 #1
      SUBI R0 R2 #5
      BEQ L14
      MOVA R5 _a
      ADD R5 R5 R2
      ADD (R5) R0 R4
      ADDI R2 R2 #1
      ADDI R3 R3 #1
      BT L15
L14:  ADDI R1 R0 #0        /* line 34 */
      STORE R1 _i
L16:  LOAD R1 _i
      SUBI R2 R1 #5        /* line 35 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L17
      MOVA R2 _a           /* line 37 */
      LOAD R1 _i
      ADD R2 R2 R1
      ADD R3 R0 (R2)
      WRITE R3 0
      ADDI R3 R1 #1        /* line 38 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L16               /* line 39 */
L17:  HALT
