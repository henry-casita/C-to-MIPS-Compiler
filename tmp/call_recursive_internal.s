.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
lw $2, 8($fp)
nop
li $3, 0
xor $2, $2, $3
sltiu $2, $2, 1
beq $2,$0, _ELSE
nop
li $2, 0
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
_ENDIF:
lw $3, 8($fp)
nop
addiu $sp, $sp, -76
jal f
nop
addiu $sp, $sp, 76
addu $2, $3, $2
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
