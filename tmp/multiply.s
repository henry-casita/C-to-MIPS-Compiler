.globl multiply
multiply : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
sw $5, 12($fp)
li $2, 0
sw $2, 16($fp)
lw $2, 8($fp)
nop
li $3, 0
slt $2, $2, $3
beq $2,$0, _ELSE
nop
addiu $sp, $sp, -76
jal multiply
nop
addiu $sp, $sp, 76
subu $2, $0, $2
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
_ENDIF:
_START_0:
lw $2, 8($fp)
nop
li $3, 0
slt $2, $3, $2
beq $2, $0, _END_1
nop
lw $2, 16($fp)
nop
lw $3, 12($fp)
nop
addu $2, $2, $3
sw $2,16($fp)
lw $2, 8($fp)
nop
li $3, 1
subu $2, $2, $3
sw $2, 8($fp)
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
