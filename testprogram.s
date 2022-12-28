f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
move $fp, $sp
li $2, 10
move $sp, $fp
lw $fp, 56($sp)
addiu $sp, $sp, 64
j $31
nop
