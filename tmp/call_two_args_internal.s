.globl g
g : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
sw $5, 12($fp)
lw $3, 8($fp)
nop
lw $2, 12($fp)
nop
addu $2, $3, $2
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
addiu $sp, $sp, -76
li $4, 10
li $5, 20
jal g
nop
addiu $sp, $sp, 76
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
