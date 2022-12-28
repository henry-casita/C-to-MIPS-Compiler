.globl bsqrt
bsqrt : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 12($fp)
sw $5, 8($fp)
sw $6, 16($fp)
_START_0:
lw $3, 8($fp)
nop
li $2, 1
addu $2, $3, $2
lw $3, 12($fp)
nop
slt $2, $2, $3
beq $2, $0, _END_1
nop
lw $3, 8($fp)
nop
lw $2, 12($fp)
nop
addu $2, $3, $2
li $3, 1
srav $2 $2, $3
sw $2, 20($fp)
lw $2, 20($fp)
nop
lw $3, 20($fp)
nop
mult  $2, $3
mflo $2
sw $2, 24($fp)
lw $2, 24($fp)
nop
lw $3, 16($fp)
nop
sub $2, $2, $3
li $3, 1
slt $2, $2, $3
beq $2,$0, _ELSE
nop
lw $2, 20($fp)
nop
sw $2,8($fp)
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
lw $2, 20($fp)
nop
sw $2,12($fp)
b ENDELSE
nop
ENDELSE:
_ENDIF:
nop
b _START_0
_END_1:
lw $2, 8($fp)
nop
lw $3, 8($fp)
nop
mult  $2, $3
mflo $2
lw $3, 16($fp)
nop
slt $2, $2, $3
beq $2,$0, _ELSE
nop
lw $2, 12($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
b _ENDIF
nop
_ELSE:
lw $2, 8($fp)
nop
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
