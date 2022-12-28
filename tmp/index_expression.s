.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
li $2, 8
sw $2, 8($fp)
b $L2
nop
$L3:
lw $2, 8($fp)
nop
addiu $2, $2, 1
sw $2, 8($fp)
lw $2, 8($fp)
nop
sw $2, 12($fp)
$L2:
lw $2, 8($fp)
nop
li $3, 16
slt $2, $2, $3
bne $2,$0 , $L3
li $2, 0
sw $2, 16($fp)
li $2, 0
sw $2,8($fp)
b $L2
nop
$L3:
lw $2, 8($fp)
nop
addiu $2, $2, 1
sw $2, 8($fp)
lw $3, 16($fp)
nop
lw $2, 12($fp)
nop
addu $2, $3, $2
sw $2,16($fp)
$L2:
lw $2, 8($fp)
nop
li $3, 8
slt $2, $2, $3
bne $2,$0 , $L3
lw $2, 16($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
