      .data
_a:   .WORD 0
_i:   .WORD 0
      .text
      ADDI R1 R0 #12345    /* line 4 */
      ADDI R2 R0 #0
      STORE R2 _i
L2:   LOAD R2 _i
      SUBI R3 R2 #3        /* line 5 */
      STORE R2 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L3
      ADDI R3 R0 #25       /* line 7 */
      SHLI R3 R3 #16
      ADDI R3 R3 #26125
      MUL R4 R1 R3
      ADDI R3 R0 #15471
      SHLI R3 R3 #16
      ADDI R3 R3 #-3233
      ADD R4 R4 R3
      ADD R1 R0 R4
      WRITE R4 0
      LOAD R2 _i
      ADDI R4 R2 #1        /* line 8 */
      ADD R2 R0 R4
      STORE R2 _i
      BT L2                /* line 9 */
L3:   ADDI R1 R0 #12345    /* line 11 */
      ADDI R2 R0 #25       /* line 12 */
      SHLI R2 R2 #16
      ADDI R2 R2 #26125
      MUL R4 R1 R2
      ADDI R2 R0 #15471
      SHLI R2 R2 #16
      ADDI R2 R2 #-3233
      ADD R4 R4 R2
      ADD R1 R0 R4
      WRITE R4 0
      ADDI R4 R0 #25       /* line 13 */
      SHLI R4 R4 #16
      ADDI R4 R4 #26125
      MUL R2 R1 R4
      ADDI R4 R0 #15471
      SHLI R4 R4 #16
      ADDI R4 R4 #-3233
      ADD R2 R2 R4
      ADD R1 R0 R2
      DIVI R1 R2 #1000
      ADDI R2 R1 #7
      ADD R1 R0 R2
      WRITE R1 0           /* line 14 */
      STORE R1 _a
      HALT
