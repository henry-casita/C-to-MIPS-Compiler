.globl g
g : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
sw $5, 12($fp)
sw $6, 16($fp)
sw $7, 20($fp)
sw $8, 24($fp)
lw $3, 8($fp)
nop
lw $2, 12($fp)
nop
addu $3, $3, $2
lw $2, 16($fp)
nop
addu $3, $3, $2
lw $2, 20($fp)
nop
addu $3, $3, $2
lw $2, 24($fp)
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
