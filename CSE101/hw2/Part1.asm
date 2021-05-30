load R1,13
load R2,15
load R3,0xFF
load R6,1
xor R4,R1,R3
xor R5,R2,R3
addi R7,R4,R6
addi R8,R5,R6
store R7,[00]
store R8,[01]


