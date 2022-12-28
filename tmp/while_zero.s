.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
_START_0:
li $2, 0
beq $2, $0, _END_1
nop
nop
b _START_0
_END_1:
li $2, 19937
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
