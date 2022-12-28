.globl g
g : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
