.globl f
f : 
addiu $sp, $sp, -64
sw $fp, 56($sp)
sw $31, 60($sp)
move $fp, $sp
sw $4, 8($fp)
sw $5, 12($fp)
sw $6, 16($fp)
lw $3, 8($fp)
nop
lw $2, 12($fp)
nop
lw $3, 16($fp)
nop
mult  $2, $3
mflo $2
addu $2, $3, $2
move $sp, $fp
lw $fp, 56($sp)
lw $31, 60($sp)
addiu $sp, $sp, 64 
jr $31
nop
