global main
extern printf	; specifies header files to be included

section	.text	; code section
main:
	push rbp	; prologue to main function
	mov rbp, rsp

	; body of code
	xor eax, eax
	lea rdi, [msg]	; lea reads msg to stdout
	call printf

	leave	; epilogue to main function
	ret

section .data	; initialised variable
	msg: db "Hello, Holberton",10,0	; ascii char 10 indicates new line
