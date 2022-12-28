.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 12($fp)
sw $5, 8($fp)
li $2, 1
sw $2, 16($fp)
li $2, 0
sw $2, 20($fp)
_START_0:
lw $2, 20($fp)
nop
lw $3, 12($fp)
nop
slt $2, $2, $3
beq $2, $0, _END_1
nop
lw $2, 20($fp)
nop
addiu $2, $2, 1
sw $2, 20($fp)
lw $2, 16($fp)
nop
lw $3, 8($fp)
nop
mult  $2, $3
mflo $2
sw $2,16($fp)
nop
b _START_0
_END_1:
lw $2, 16($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
