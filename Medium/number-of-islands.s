	.file	"number-of-islands.cpp"
	.text
	.p2align 4
	.globl	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.type	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, @function
_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE:
.LFB8476:
	.cfi_startproc
	endbr64
	movslq	%edi, %rax
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movq	%rax, %r14
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	leal	-1(%r14), %edi
	leaq	(%rax,%rax,2), %r13
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	salq	$3, %r13
	leal	1(%rax), %eax
	movq	%r8, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	leaq	24(%r13), %r10
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movslq	%esi, %rbx
	movslq	%edi, %rsi
	leaq	(%rsi,%rsi,2), %r9
	movq	%rbx, %rbp
	leaq	0(,%r9,8), %r15
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movq	(%r8), %rsi
	movq	%r15, %r9
	movl	%eax, %r15d
	movl	%edi, (%rsp)
	movl	%r14d, %eax
	movl	%edx, %r14d
	movq	(%rsi,%r13), %rsi
.L6:
	movb	$48, (%rsi,%rbx)
	cmpl	%r14d, %r15d
	jge	.L2
	movq	(%r12), %rdx
	movq	(%rdx,%r10), %rdx
	cmpb	$49, (%rdx,%rbx)
	je	.L11
.L2:
	testl	%eax, %eax
	jle	.L3
	movq	(%r12), %rdx
	movq	(%rdx,%r9), %rdx
	cmpb	$49, (%rdx,%rbx)
	je	.L12
.L3:
	leal	1(%rbp), %esi
	cmpl	%esi, %ecx
	jle	.L4
	movq	(%r12), %rdx
	movq	(%rdx,%r13), %rdx
	cmpb	$49, 1(%rdx,%rbx)
	je	.L13
.L4:
	testl	%ebp, %ebp
	jle	.L1
	movq	(%r12), %rdx
	subl	$1, %ebp
	movq	(%rdx,%r13), %rsi
	movzbl	-1(%rsi,%rbx), %edx
	subq	$1, %rbx
	cmpb	$49, %dl
	je	.L6
.L1:
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L12:
	.cfi_restore_state
	movl	(%rsp), %edi
	movq	%r12, %r8
	movl	%r14d, %edx
	movl	%ebp, %esi
	movq	%r9, 24(%rsp)
	movl	%eax, 16(%rsp)
	movq	%r10, 8(%rsp)
	movl	%ecx, 4(%rsp)
	call	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	movq	24(%rsp), %r9
	movl	16(%rsp), %eax
	movq	8(%rsp), %r10
	movl	4(%rsp), %ecx
	jmp	.L3
	.p2align 4,,10
	.p2align 3
.L11:
	movq	%r12, %r8
	movl	%r14d, %edx
	movl	%ebp, %esi
	movl	%r15d, %edi
	movq	%r9, 24(%rsp)
	movl	%eax, 16(%rsp)
	movq	%r10, 8(%rsp)
	movl	%ecx, 4(%rsp)
	call	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	movq	24(%rsp), %r9
	movl	16(%rsp), %eax
	movq	8(%rsp), %r10
	movl	4(%rsp), %ecx
	jmp	.L2
	.p2align 4,,10
	.p2align 3
.L13:
	movl	%eax, %edi
	movq	%r12, %r8
	movl	%r14d, %edx
	movq	%r9, 24(%rsp)
	movq	%r10, 16(%rsp)
	movl	%ecx, 8(%rsp)
	movl	%eax, 4(%rsp)
	call	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	movq	24(%rsp), %r9
	movq	16(%rsp), %r10
	movl	8(%rsp), %ecx
	movl	4(%rsp), %eax
	jmp	.L4
	.cfi_endproc
.LFE8476:
	.size	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, .-_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.p2align 4
	.globl	_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE
	.type	_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE, @function
_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE:
.LFB8497:
	.cfi_startproc
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$8, %rsp
	.cfi_def_cfa_offset 64
	movq	(%rdi), %rax
	movq	8(%rdi), %rdx
	cmpq	%rdx, %rax
	je	.L20
	movq	%rdi, %r14
	xorl	%r13d, %r13d
	xorl	%r12d, %r12d
	movabsq	$-6148914691236517205, %rbx
	.p2align 4,,10
	.p2align 3
.L19:
	movq	8(%rax), %rcx
	movl	%r13d, %r15d
	subq	(%rax), %rcx
	je	.L16
	leaq	0(%r13,%r13,2), %rbp
	xorl	%r11d, %r11d
	salq	$3, %rbp
	jmp	.L18
	.p2align 4,,10
	.p2align 3
.L17:
	movq	8(%rax), %rcx
	addq	$1, %r11
	subq	(%rax), %rcx
	cmpq	%r11, %rcx
	jbe	.L16
.L18:
	movq	(%rax,%rbp), %rsi
	cmpb	$49, (%rsi,%r11)
	jne	.L17
	subq	%rax, %rdx
	movl	%r11d, %esi
	movq	%r14, %r8
	movl	%r15d, %edi
	sarq	$3, %rdx
	addl	$1, %r12d
	imulq	%rbx, %rdx
	call	_Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	movq	(%r14), %rax
	movq	8(%r14), %rdx
	addq	$1, %r11
	movq	8(%rax), %rcx
	subq	(%rax), %rcx
	cmpq	%r11, %rcx
	ja	.L18
	.p2align 4,,10
	.p2align 3
.L16:
	movq	%rdx, %rcx
	addq	$1, %r13
	subq	%rax, %rcx
	sarq	$3, %rcx
	imulq	%rbx, %rcx
	cmpq	%r13, %rcx
	ja	.L19
.L14:
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movl	%r12d, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L20:
	.cfi_restore_state
	xorl	%r12d, %r12d
	jmp	.L14
	.cfi_endproc
.LFE8497:
	.size	_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE, .-_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE
	.section	.text._ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev,"axG",@progbits,_ZNSt6vectorIS_IcSaIcEESaIS1_EED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev
	.type	_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev, @function
_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev:
.LFB9073:
	.cfi_startproc
	endbr64
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movq	8(%rdi), %rbx
	movq	(%rdi), %rbp
	cmpq	%rbp, %rbx
	je	.L28
	movq	%rdi, %r12
	.p2align 4,,10
	.p2align 3
.L30:
	movq	0(%rbp), %rdi
	testq	%rdi, %rdi
	je	.L29
	call	_ZdlPv@PLT
.L29:
	addq	$24, %rbp
	cmpq	%rbp, %rbx
	jne	.L30
	movq	(%r12), %rbp
.L28:
	testq	%rbp, %rbp
	je	.L27
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	movq	%rbp, %rdi
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	jmp	_ZdlPv@PLT
	.p2align 4,,10
	.p2align 3
.L27:
	.cfi_restore_state
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE9073:
	.size	_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev, .-_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev
	.weak	_ZNSt6vectorIS_IcSaIcEESaIS1_EED1Ev
	.set	_ZNSt6vectorIS_IcSaIcEESaIS1_EED1Ev,_ZNSt6vectorIS_IcSaIcEESaIS1_EED2Ev
	.section	.text._ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev,"axG",@progbits,_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev
	.type	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev, @function
_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev:
.LFB9336:
	.cfi_startproc
	endbr64
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movq	(%rdi), %rdi
	testq	%rdi, %rdi
	je	.L37
	movq	72(%r12), %rax
	movq	40(%r12), %rbx
	leaq	8(%rax), %rbp
	cmpq	%rbx, %rbp
	jbe	.L39
	.p2align 4,,10
	.p2align 3
.L40:
	movq	(%rbx), %rdi
	addq	$8, %rbx
	call	_ZdlPv@PLT
	cmpq	%rbx, %rbp
	ja	.L40
	movq	(%r12), %rdi
.L39:
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	jmp	_ZdlPv@PLT
	.p2align 4,,10
	.p2align 3
.L37:
	.cfi_restore_state
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE9336:
	.size	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev, .-_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev
	.weak	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED1Ev
	.set	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED1Ev,_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev
	.section	.rodata._ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_.str1.1,"aMS",@progbits,1
.LC0:
	.string	"vector::_M_realloc_insert"
	.section	.text._ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,"axG",@progbits,_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_
	.type	_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_, @function
_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_:
.LFB9371:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9371
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movq	8(%rdi), %rbp
	movq	(%rdi), %r15
	movq	%rdx, 8(%rsp)
	movabsq	$-6148914691236517205, %rdx
	movq	%rbp, %rax
	subq	%r15, %rax
	sarq	$3, %rax
	imulq	%rdx, %rax
	movabsq	$384307168202282325, %rdx
	cmpq	%rdx, %rax
	je	.L77
	movq	%rsi, %r12
	movq	%rdi, %r13
	movq	%rsi, %rbx
	subq	%r15, %r12
	testq	%rax, %rax
	je	.L61
	leaq	(%rax,%rax), %rdi
	movq	%rdi, 24(%rsp)
	cmpq	%rdi, %rax
	jbe	.L78
	movabsq	$9223372036854775800, %rdi
	movq	%rdx, 24(%rsp)
.L45:
.LEHB0:
	call	_Znwm@PLT
.LEHE0:
	movq	%rax, %r14
.L60:
	movq	8(%rsp), %rsi
	addq	%r14, %r12
	movq	$0, (%r12)
	movq	$0, 8(%r12)
	movq	8(%rsi), %rax
	movq	$0, 16(%r12)
	subq	(%rsi), %rax
	movq	%rax, 16(%rsp)
	je	.L47
	js	.L79
	movq	16(%rsp), %rdi
.LEHB1:
	call	_Znwm@PLT
	movq	8(%rsp), %rdx
	movq	%rax, %rcx
	movq	%rax, (%r12)
	movq	%rax, 8(%r12)
	movq	16(%rsp), %rax
	movq	(%rdx), %rsi
	movq	8(%rdx), %rdx
	addq	%rcx, %rax
	movq	%rax, 16(%r12)
	subq	%rsi, %rdx
	je	.L49
	movq	%rcx, %rdi
	movq	%rdx, 8(%rsp)
	call	memmove@PLT
	movq	8(%rsp), %rdx
	movq	%rax, %rcx
.L49:
	addq	%rdx, %rcx
	movq	%rcx, 8(%r12)
	cmpq	%r15, %rbx
	je	.L64
.L80:
	movq	%r14, %rdx
	movq	%r15, %rax
	.p2align 4,,10
	.p2align 3
.L51:
	movq	(%rax), %rcx
	addq	$24, %rax
	addq	$24, %rdx
	movq	%rcx, -24(%rdx)
	movq	-16(%rax), %rcx
	movq	%rcx, -16(%rdx)
	movq	-8(%rax), %rcx
	movq	%rcx, -8(%rdx)
	cmpq	%rax, %rbx
	jne	.L51
	leaq	-24(%rbx), %rax
	subq	%r15, %rax
	shrq	$3, %rax
	leaq	24(%r14,%rax,8), %r12
.L50:
	addq	$24, %r12
	cmpq	%rbp, %rbx
	je	.L52
	movq	%rbx, %rax
	movq	%r12, %rdx
	.p2align 4,,10
	.p2align 3
.L53:
	movq	(%rax), %rcx
	addq	$24, %rax
	addq	$24, %rdx
	movq	%rcx, -24(%rdx)
	movq	-16(%rax), %rcx
	movq	%rcx, -16(%rdx)
	movq	-8(%rax), %rcx
	movq	%rcx, -8(%rdx)
	cmpq	%rbp, %rax
	jne	.L53
	subq	%rbx, %rax
	subq	$24, %rax
	shrq	$3, %rax
	leaq	24(%r12,%rax,8), %r12
.L52:
	testq	%r15, %r15
	je	.L54
	movq	%r15, %rdi
	call	_ZdlPv@PLT
.L54:
	movq	24(%rsp), %rax
	movq	%r14, 0(%r13)
	movq	%r12, 8(%r13)
	leaq	(%rax,%rax,2), %rax
	leaq	(%r14,%rax,8), %rax
	movq	%rax, 16(%r13)
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L78:
	.cfi_restore_state
	testq	%rdi, %rdi
	jne	.L46
	xorl	%r14d, %r14d
	jmp	.L60
	.p2align 4,,10
	.p2align 3
.L61:
	movq	$1, 24(%rsp)
	movl	$24, %edi
	jmp	.L45
	.p2align 4,,10
	.p2align 3
.L47:
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	addq	%rdx, %rcx
	movq	%rcx, 8(%r12)
	cmpq	%r15, %rbx
	jne	.L80
.L64:
	movq	%r14, %r12
	jmp	.L50
.L79:
	call	_ZSt17__throw_bad_allocv@PLT
.LEHE1:
.L46:
	movq	24(%rsp), %rax
	cmpq	%rdx, %rax
	cmovbe	%rax, %rdx
	movq	%rdx, 24(%rsp)
	imulq	$24, %rdx, %rdi
	jmp	.L45
.L77:
	leaq	.LC0(%rip), %rdi
.LEHB2:
	call	_ZSt20__throw_length_errorPKc@PLT
.LEHE2:
.L65:
	endbr64
	movq	%rax, %rdi
.L55:
	call	__cxa_begin_catch@PLT
	testq	%r14, %r14
	je	.L81
	movq	%r14, %rdi
	call	_ZdlPv@PLT
.L59:
.LEHB3:
	call	__cxa_rethrow@PLT
.LEHE3:
.L81:
	movq	(%r12), %rdi
	testq	%rdi, %rdi
	je	.L59
	call	_ZdlPv@PLT
	jmp	.L59
.L66:
	endbr64
	movq	%rax, %rbp
.L58:
	call	__cxa_end_catch@PLT
	movq	%rbp, %rdi
.LEHB4:
	call	_Unwind_Resume@PLT
.LEHE4:
	.cfi_endproc
.LFE9371:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,"aG",@progbits,_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,comdat
	.align 4
.LLSDA9371:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT9371-.LLSDATTD9371
.LLSDATTD9371:
	.byte	0x1
	.uleb128 .LLSDACSE9371-.LLSDACSB9371
.LLSDACSB9371:
	.uleb128 .LEHB0-.LFB9371
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB9371
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L65-.LFB9371
	.uleb128 0x1
	.uleb128 .LEHB2-.LFB9371
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB9371
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L66-.LFB9371
	.uleb128 0
	.uleb128 .LEHB4-.LFB9371
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE9371:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT9371:
	.section	.text._ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,"axG",@progbits,_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,comdat
	.size	_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_, .-_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC1:
	.string	"GOL"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB2:
	.section	.text.startup,"ax",@progbits
.LHOTB2:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB8498:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA8498
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$88, %rsp
	.cfi_def_cfa_offset 144
	movq	%fs:40, %rax
	movq	%rax, 72(%rsp)
	xorl	%eax, %eax
	leaq	16(%rsp), %rax
	movl	$1000, 4(%rsp)
	movq	$0, 16(%rsp)
	movq	$0, 24(%rsp)
	movq	$0, 32(%rsp)
	movq	%rax, 8(%rsp)
.L97:
	movq	$0, 48(%rsp)
	movl	$1000, %ebx
	xorl	%r12d, %r12d
	xorl	%eax, %eax
	movq	$0, 56(%rsp)
	movq	$0, 64(%rsp)
	jmp	.L90
	.p2align 4,,10
	.p2align 3
.L125:
	movb	$49, (%rax)
	addq	$1, 56(%rsp)
	subl	$1, %ebx
	je	.L89
.L129:
	movq	56(%rsp), %rax
	movq	64(%rsp), %r12
.L90:
	cmpq	%rax, %r12
	jne	.L125
	movabsq	$9223372036854775807, %rax
	movq	48(%rsp), %r13
	subq	%r13, %r12
	cmpq	%rax, %r12
	je	.L126
	movl	$1, %ebp
	testq	%r12, %r12
	je	.L86
	leaq	(%r12,%r12), %rbp
	cmpq	%rbp, %r12
	jbe	.L127
	movabsq	$9223372036854775807, %rbp
.L86:
	movq	%rbp, %rdi
.LEHB5:
	call	_Znwm@PLT
	movb	$49, (%rax,%r12)
	movq	%rax, %r15
	addq	%rax, %rbp
	leaq	1(%rax,%r12), %r14
	testq	%r12, %r12
	jg	.L128
	testq	%r13, %r13
	jne	.L87
.L88:
	movq	%r15, 48(%rsp)
	movq	%r14, 56(%rsp)
	movq	%rbp, 64(%rsp)
	subl	$1, %ebx
	jne	.L129
.L89:
	movq	24(%rsp), %rbp
	cmpq	32(%rsp), %rbp
	je	.L91
	movq	56(%rsp), %rbx
	subq	48(%rsp), %rbx
	movq	$0, 8(%rbp)
	movq	$0, 0(%rbp)
	movq	$0, 16(%rbp)
	je	.L106
	js	.L130
	movq	%rbx, %rdi
	call	_Znwm@PLT
.LEHE5:
	movq	24(%rsp), %r13
	movq	%rax, %rcx
.L92:
	movq	%rcx, 0(%rbp)
	movq	48(%rsp), %r12
	addq	%rcx, %rbx
	movq	%rcx, 8(%rbp)
	movq	56(%rsp), %rax
	movq	%rbx, 16(%rbp)
	xorl	%ebx, %ebx
	subq	%r12, %rax
	jne	.L131
.L94:
	addq	%rbx, %rcx
	addq	$24, %r13
	movq	%rcx, 8(%rbp)
	movq	%r13, 24(%rsp)
.L95:
	testq	%r12, %r12
	je	.L96
	movq	%r12, %rdi
	call	_ZdlPv@PLT
.L96:
	subl	$1, 4(%rsp)
	jne	.L97
	movl	$1000, %esi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB6:
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	movl	$3, %edx
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	movq	8(%rsp), %rbx
	movq	%rbx, %rdi
	call	_Z10numIslandsRSt6vectorIS_IcSaIcEESaIS1_EE
	leaq	_ZSt4cout(%rip), %rdi
	movl	%eax, %esi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
.LEHE6:
	movq	%rbx, %rdi
	call	_ZNSt6vectorIS_IcSaIcEESaIS1_EED1Ev
	movq	72(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L132
	addq	$88, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L127:
	.cfi_restore_state
	movabsq	$9223372036854775807, %rax
	testq	%rbp, %rbp
	cmovs	%rax, %rbp
	jmp	.L86
	.p2align 4,,10
	.p2align 3
.L128:
	movq	%r12, %rdx
	movq	%r13, %rsi
	movq	%r15, %rdi
	call	memmove@PLT
.L87:
	movq	%r13, %rdi
	call	_ZdlPv@PLT
	jmp	.L88
.L91:
	movq	8(%rsp), %rdi
	leaq	48(%rsp), %rdx
	movq	%rbp, %rsi
.LEHB7:
	call	_ZNSt6vectorIS_IcSaIcEESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_
	movq	48(%rsp), %r12
	jmp	.L95
.L131:
	movq	%rcx, %rdi
	movq	%rax, %rdx
	movq	%r12, %rsi
	movq	%rax, %rbx
	call	memmove@PLT
	movq	%rax, %rcx
	jmp	.L94
.L106:
	movq	%rbp, %r13
	xorl	%ecx, %ecx
	jmp	.L92
.L126:
	leaq	.LC0(%rip), %rdi
	call	_ZSt20__throw_length_errorPKc@PLT
.L132:
	call	__stack_chk_fail@PLT
.L130:
	call	_ZSt17__throw_bad_allocv@PLT
.LEHE7:
.L108:
	endbr64
	movq	%rax, %rbp
	jmp	.L98
.L109:
	endbr64
	movq	%rax, %rbp
	jmp	.L100
	.section	.gcc_except_table,"a",@progbits
.LLSDA8498:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE8498-.LLSDACSB8498
.LLSDACSB8498:
	.uleb128 .LEHB5-.LFB8498
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L108-.LFB8498
	.uleb128 0
	.uleb128 .LEHB6-.LFB8498
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L109-.LFB8498
	.uleb128 0
	.uleb128 .LEHB7-.LFB8498
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L108-.LFB8498
	.uleb128 0
.LLSDACSE8498:
	.section	.text.startup
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC8498
	.type	main.cold, @function
main.cold:
.LFSB8498:
.L98:
	.cfi_def_cfa_offset 144
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	48(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L100
	call	_ZdlPv@PLT
.L100:
	movq	8(%rsp), %rdi
	call	_ZNSt6vectorIS_IcSaIcEESaIS1_EED1Ev
	movq	%rbp, %rdi
.LEHB8:
	call	_Unwind_Resume@PLT
.LEHE8:
	.cfi_endproc
.LFE8498:
	.section	.gcc_except_table
.LLSDAC8498:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC8498-.LLSDACSBC8498
.LLSDACSBC8498:
	.uleb128 .LEHB8-.LCOLDB2
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSEC8498:
	.section	.text.unlikely
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE2:
	.section	.text.startup
.LHOTE2:
	.section	.rodata._ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_.str1.8,"aMS",@progbits,1
	.align 8
.LC3:
	.string	"cannot create std::deque larger than max_size()"
	.section	.text._ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_,"axG",@progbits,_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	.type	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_, @function
_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_:
.LFB9554:
	.cfi_startproc
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movq	%rdi, %rbx
	subq	$8, %rsp
	.cfi_def_cfa_offset 64
	movq	64(%rdi), %rcx
	movq	48(%rdi), %rax
	leaq	-8(%rcx), %rdx
	cmpq	%rdx, %rax
	je	.L134
	movq	(%rsi), %rdx
	addq	$8, %rax
	movq	%rdx, -8(%rax)
	movq	%rax, 48(%rdi)
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L134:
	.cfi_restore_state
	movq	72(%rdi), %r13
	movq	40(%rdi), %rsi
	subq	56(%rdi), %rax
	movq	%r13, %r12
	sarq	$3, %rax
	subq	%rsi, %r12
	movq	%r12, %rcx
	sarq	$3, %rcx
	leaq	-1(%rcx), %rdx
	salq	$6, %rdx
	addq	%rax, %rdx
	movq	32(%rdi), %rax
	subq	16(%rdi), %rax
	movabsq	$1152921504606846975, %rdi
	sarq	$3, %rax
	addq	%rdx, %rax
	cmpq	%rdi, %rax
	je	.L144
	movq	(%rbx), %r8
	movq	8(%rbx), %rdx
	movq	%r13, %rax
	subq	%r8, %rax
	movq	%rdx, %r9
	sarq	$3, %rax
	subq	%rax, %r9
	cmpq	$1, %r9
	jbe	.L145
.L137:
	movl	$512, %edi
	call	_Znwm@PLT
	movq	0(%rbp), %rdx
	movq	%rax, 8(%r13)
	movq	48(%rbx), %rax
	movq	%rdx, (%rax)
	movq	72(%rbx), %rax
	leaq	8(%rax), %rdx
	movq	8(%rax), %rax
	movq	%rdx, 72(%rbx)
	leaq	512(%rax), %rdx
	movq	%rax, 56(%rbx)
	movq	%rdx, 64(%rbx)
	movq	%rax, 48(%rbx)
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L145:
	.cfi_restore_state
	leaq	2(%rcx), %r14
	leaq	(%r14,%r14), %rax
	cmpq	%rax, %rdx
	ja	.L146
	testq	%rdx, %rdx
	movl	$1, %eax
	cmovne	%rdx, %rax
	leaq	2(%rdx,%rax), %r13
	cmpq	%rdi, %r13
	ja	.L147
	leaq	0(,%r13,8), %rdi
	call	_Znwm@PLT
	movq	40(%rbx), %rsi
	movq	%rax, %r15
	movq	%r13, %rax
	subq	%r14, %rax
	shrq	%rax
	leaq	(%r15,%rax,8), %r14
	movq	72(%rbx), %rax
	leaq	8(%rax), %rdx
	cmpq	%rsi, %rdx
	je	.L142
	subq	%rsi, %rdx
	movq	%r14, %rdi
	call	memmove@PLT
.L142:
	movq	(%rbx), %rdi
	call	_ZdlPv@PLT
	movq	%r15, (%rbx)
	movq	%r13, 8(%rbx)
.L140:
	movq	(%r14), %rax
	leaq	(%r14,%r12), %r13
	movq	%r14, 40(%rbx)
	movq	%r13, 72(%rbx)
	movq	%rax, 24(%rbx)
	addq	$512, %rax
	movq	%rax, 32(%rbx)
	movq	0(%r13), %rax
	movq	%rax, 56(%rbx)
	addq	$512, %rax
	movq	%rax, 64(%rbx)
	jmp	.L137
	.p2align 4,,10
	.p2align 3
.L146:
	subq	%r14, %rdx
	addq	$8, %r13
	shrq	%rdx
	leaq	(%r8,%rdx,8), %r14
	movq	%r13, %rdx
	subq	%rsi, %rdx
	cmpq	%r14, %rsi
	jbe	.L139
	cmpq	%r13, %rsi
	je	.L140
	movq	%r14, %rdi
	call	memmove@PLT
	jmp	.L140
	.p2align 4,,10
	.p2align 3
.L139:
	cmpq	%r13, %rsi
	je	.L140
	leaq	8(%r12), %rdi
	subq	%rdx, %rdi
	addq	%r14, %rdi
	call	memmove@PLT
	jmp	.L140
.L144:
	leaq	.LC3(%rip), %rdi
	call	_ZSt20__throw_length_errorPKc@PLT
.L147:
	call	_ZSt17__throw_bad_allocv@PLT
	.cfi_endproc
.LFE9554:
	.size	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_, .-_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	.section	.text.unlikely
.LCOLDB4:
	.text
.LHOTB4:
	.p2align 4
	.globl	_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.type	_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, @function
_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE:
.LFB8477:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA8477
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movl	%edi, %r14d
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	movl	%ecx, %r13d
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movq	%r8, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movl	%esi, %ebp
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$136, %rsp
	.cfi_def_cfa_offset 192
	movq	(%r8), %r8
	movl	%edx, 12(%rsp)
	movslq	%esi, %rdx
	movq	%fs:40, %rax
	movq	%rax, 120(%rsp)
	xorl	%eax, %eax
	movslq	%edi, %rax
	movl	$64, %edi
	leaq	(%rax,%rax,2), %rax
	leaq	(%r8,%rax,8), %rax
	movq	(%rax), %rax
	movb	$48, (%rax,%rdx)
	movq	$0, 32(%rsp)
	movq	$0, 48(%rsp)
	movq	$0, 56(%rsp)
	movq	$0, 64(%rsp)
	movq	$0, 72(%rsp)
	movq	$0, 80(%rsp)
	movq	$0, 88(%rsp)
	movq	$0, 96(%rsp)
	movq	$0, 104(%rsp)
	movq	$8, 40(%rsp)
.LEHB9:
	call	_Znwm@PLT
.LEHE9:
	movq	40(%rsp), %rdx
	movl	$512, %edi
	movq	%rax, 32(%rsp)
	leaq	-4(,%rdx,4), %rbx
	andq	$-8, %rbx
	addq	%rax, %rbx
.LEHB10:
	call	_Znwm@PLT
.LEHE10:
	movq	%rax, (%rbx)
	leaq	24(%rsp), %r15
	leaq	512(%rax), %rdx
	movl	%r14d, 24(%rsp)
	leaq	32(%rsp), %r14
	movq	%r15, %rsi
	movq	%r14, %rdi
	movq	%rbx, 72(%rsp)
	movq	%rax, 56(%rsp)
	movq	%rdx, 64(%rsp)
	movq	%rbx, 104(%rsp)
	movq	%rax, 88(%rsp)
	movq	%rdx, 96(%rsp)
	movq	%rax, 48(%rsp)
	movq	%rax, 80(%rsp)
	movl	%ebp, 28(%rsp)
.LEHB11:
	call	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	movq	48(%rsp), %rax
	cmpq	%rax, 80(%rsp)
	jne	.L153
	jmp	.L154
	.p2align 4,,10
	.p2align 3
.L175:
	addq	$8, %rax
	movq	%rax, 48(%rsp)
.L156:
	leal	1(%rbp), %edx
	cmpl	12(%rsp), %edx
	jge	.L157
	movq	(%r12), %rdi
	movslq	%edx, %rax
	movslq	%ebx, %rcx
	leaq	(%rax,%rax,2), %rax
	leaq	(%rdi,%rax,8), %rax
	addq	(%rax), %rcx
	cmpb	$49, (%rcx)
	je	.L171
.L157:
	testl	%ebp, %ebp
	jle	.L158
	leal	-1(%rbp), %ecx
	movq	(%r12), %rsi
	movslq	%ebx, %rdx
	movslq	%ecx, %rax
	leaq	(%rax,%rax,2), %rax
	leaq	(%rsi,%rax,8), %rax
	addq	(%rax), %rdx
	cmpb	$49, (%rdx)
	je	.L172
.L158:
	leal	1(%rbx), %edx
	cmpl	%r13d, %edx
	jge	.L159
	movq	(%r12), %rcx
	movslq	%ebp, %rax
	leaq	(%rax,%rax,2), %rax
	leaq	(%rcx,%rax,8), %rax
	movslq	%edx, %rcx
	addq	(%rax), %rcx
	cmpb	$49, (%rcx)
	je	.L173
.L159:
	cmpl	%r13d, %ebx
	jg	.L160
	movq	(%r12), %rdx
	movslq	%ebp, %rax
	subl	$1, %ebx
	leaq	(%rax,%rax,2), %rax
	leaq	(%rdx,%rax,8), %rax
	movslq	%ebx, %rdx
	addq	(%rax), %rdx
	cmpb	$49, (%rdx)
	je	.L174
.L160:
	movq	48(%rsp), %rax
	cmpq	80(%rsp), %rax
	je	.L154
.L153:
	movq	64(%rsp), %rsi
	movl	(%rax), %ebp
	movl	4(%rax), %ebx
	leaq	-8(%rsi), %rdx
	cmpq	%rdx, %rax
	jne	.L175
	movq	56(%rsp), %rdi
	call	_ZdlPv@PLT
	movq	72(%rsp), %rax
	leaq	8(%rax), %rdx
	movq	8(%rax), %rax
	movq	%rdx, 72(%rsp)
	leaq	512(%rax), %rdx
	movq	%rax, 56(%rsp)
	movq	%rdx, 64(%rsp)
	movq	%rax, 48(%rsp)
	jmp	.L156
	.p2align 4,,10
	.p2align 3
.L154:
	movq	%r14, %rdi
	call	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev
	movq	120(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L176
	addq	$136, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L172:
	.cfi_restore_state
	movb	$48, (%rdx)
	movq	%r15, %rsi
	movq	%r14, %rdi
	movl	%ecx, 24(%rsp)
	movl	%ebx, 28(%rsp)
	call	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	jmp	.L158
	.p2align 4,,10
	.p2align 3
.L171:
	movb	$48, (%rcx)
	movq	%r15, %rsi
	movq	%r14, %rdi
	movl	%edx, 24(%rsp)
	movl	%ebx, 28(%rsp)
	call	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	jmp	.L157
	.p2align 4,,10
	.p2align 3
.L173:
	movb	$48, (%rcx)
	movq	%r15, %rsi
	movq	%r14, %rdi
	movl	%ebp, 24(%rsp)
	movl	%edx, 28(%rsp)
	call	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
	jmp	.L159
	.p2align 4,,10
	.p2align 3
.L174:
	movb	$48, (%rdx)
	movq	%r15, %rsi
	movq	%r14, %rdi
	movl	%ebp, 24(%rsp)
	movl	%ebx, 28(%rsp)
	call	_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_
.LEHE11:
	jmp	.L160
.L176:
	call	__stack_chk_fail@PLT
.L163:
	endbr64
	movq	%rax, %rbp
	jmp	.L161
.L166:
	endbr64
	movq	%rax, %rdi
	jmp	.L150
	.section	.gcc_except_table
	.align 4
.LLSDA8477:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT8477-.LLSDATTD8477
.LLSDATTD8477:
	.byte	0x1
	.uleb128 .LLSDACSE8477-.LLSDACSB8477
.LLSDACSB8477:
	.uleb128 .LEHB9-.LFB8477
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB10-.LFB8477
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L166-.LFB8477
	.uleb128 0x1
	.uleb128 .LEHB11-.LFB8477
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L163-.LFB8477
	.uleb128 0
.LLSDACSE8477:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	0

.LLSDATT8477:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC8477
	.type	_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE.cold, @function
_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE.cold:
.LFSB8477:
.L161:
	.cfi_def_cfa_offset 192
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	%r14, %rdi
	call	_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev
	movq	%rbp, %rdi
.LEHB12:
	call	_Unwind_Resume@PLT
.LEHE12:
.L150:
	call	__cxa_begin_catch@PLT
.LEHB13:
	call	__cxa_rethrow@PLT
.LEHE13:
.L165:
	endbr64
	movq	%rax, %rbp
	call	__cxa_end_catch@PLT
	movq	%rbp, %rdi
	call	__cxa_begin_catch@PLT
	movq	32(%rsp), %rdi
	call	_ZdlPv@PLT
	movq	$0, 32(%rsp)
	movq	$0, 40(%rsp)
.LEHB14:
	call	__cxa_rethrow@PLT
.LEHE14:
.L164:
	endbr64
	movq	%rax, %rbp
	call	__cxa_end_catch@PLT
	movq	%rbp, %rdi
.LEHB15:
	call	_Unwind_Resume@PLT
.LEHE15:
	.cfi_endproc
.LFE8477:
	.section	.gcc_except_table
	.align 4
.LLSDAC8477:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATTC8477-.LLSDATTDC8477
.LLSDATTDC8477:
	.byte	0x1
	.uleb128 .LLSDACSEC8477-.LLSDACSBC8477
.LLSDACSBC8477:
	.uleb128 .LEHB12-.LCOLDB4
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB13-.LCOLDB4
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L165-.LCOLDB4
	.uleb128 0x3
	.uleb128 .LEHB14-.LCOLDB4
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L164-.LCOLDB4
	.uleb128 0
	.uleb128 .LEHB15-.LCOLDB4
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
.LLSDACSEC8477:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	0

.LLSDATTC8477:
	.section	.text.unlikely
	.text
	.size	_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, .-_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.section	.text.unlikely
	.size	_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE.cold, .-_Z4findiiiiRSt6vectorIS_IcSaIcEESaIS1_EE.cold
.LCOLDE4:
	.text
.LHOTE4:
	.section	.text.startup
	.p2align 4
	.type	_GLOBAL__sub_I__Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, @function
_GLOBAL__sub_I__Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE:
.LFB10105:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE10105:
	.size	_GLOBAL__sub_I__Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE, .-_GLOBAL__sub_I__Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13findneighborsiiiiRSt6vectorIS_IcSaIcEESaIS1_EE
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
