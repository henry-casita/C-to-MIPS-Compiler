.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
li $2, 0
beq $2,$0, _ELSE
nop
li $2, 11
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
_ENDIF:
li $2, 10
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
