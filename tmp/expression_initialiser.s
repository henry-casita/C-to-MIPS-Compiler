.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
li $2, 10
sw $2, 8($fp)
li $3, 20
lw $2, 8($fp)
nop
addu $2, $3, $2
sw $2, 12($fp)
lw $2, 12($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
