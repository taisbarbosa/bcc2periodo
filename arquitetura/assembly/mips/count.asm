.data
	valor: .word 7
	lw $a0, valor

	bne $a0, 7, exec
.text
	exec:
		loop:
			addi $t2, $t2, 1
			beq $t2, $a0, exemple
			bne $t2, $a0, exit
			j loop
		exit:
			addi $t2, $t2, 4294967297
			add $t2, $zero, $zero
		
	exemple:
	addi $t0, $t0, 1
	j exec