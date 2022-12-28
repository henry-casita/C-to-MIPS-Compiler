.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
sw $5, 12($fp)
lw $2, 8($fp)
nop
bne $2, $0, $L2
nop
lw $2, 12($fp)
nop
beq $2, $0, $L3
nop
$L2:
li $2, 1
b $L4
nop
$L3:
move $2, $0
$L4:
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
