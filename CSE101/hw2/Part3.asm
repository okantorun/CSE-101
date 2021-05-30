load R0,96
load R6,0
load R1,80
load R2,1
toplam:
load R3,[R1]
ror R3,4
addi R6,R3,R6
addi R1,R1,R2
jmpEQ R1=R0,stop
jmp toplam
stop:
halt

