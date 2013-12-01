	.file	"add.cpp"
	.section	.text._Z3addii,"axG",@progbits,_Z3addii,comdat
	.p2align 4,,15
	.weak	_Z3addii
	.type	_Z3addii, @function
_Z3addii:
.LFB0:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$2, 4(%esp)
	movl	$1, (%esp)
	call	_Z3addii
	movl	8(%ebp), %eax
	addl	12(%ebp), %eax
	leave
	ret
	.cfi_endproc
.LFE0:
	.size	_Z3addii, .-_Z3addii
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	movl	$2, 4(%esp)
	movl	$1, (%esp)
	call	_Z3addii
	xorl	%eax, %eax
	leave
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5.1) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
