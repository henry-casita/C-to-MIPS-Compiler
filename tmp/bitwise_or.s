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
lw $3, 12($fp)
nop
or $2,  $3, $2
sw $2, 16($fp)
lw $2, 16($fp)
nop
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
