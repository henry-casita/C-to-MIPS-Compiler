.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
addiu $sp, $sp, -76
li $4, 1
sw $8, 16($sp)
li $5, 2
sw $8, 16($sp)
li $6, 3
sw $8, 16($sp)
li $7, 4
sw $8, 16($sp)
li $8, 5
sw $8, 16($sp)
jal g
nop
addiu $sp, $sp, 76
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
