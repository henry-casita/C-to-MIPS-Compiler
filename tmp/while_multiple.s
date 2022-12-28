.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
li $2, 20
sw $2, 8($fp)
_START_0:
lw $2, 8($fp)
nop
li $3, 10
slt $2, $3, $2
beq $2, $0, _END_1
nop
lw $2, 8($fp)
nop
li $3, 1
subu $2, $2, $3
sw $2,8($fp)
nop
b _START_0
_END_1:
lw $2, 8($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
