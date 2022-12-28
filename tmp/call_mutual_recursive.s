.globl r1
r1 : 
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
li $2, 1
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
addiu $sp, $sp, -76
jal r2
nop
addiu $sp, $sp, 76
addiu $sp, $sp, -76
jal r2
nop
addiu $sp, $sp, 76
addu $2, $3, $2
b ENDELSE
nop
ENDELSE:
_ENDIF:
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
