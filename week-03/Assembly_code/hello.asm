section .data 
    msg db "Hello, World!", 0x00

section .text
    global _start 

_start: 
    ; write in stdout 
    mov rax, 1   ; syscall 1 = write 
    mov rdi, 1   ; file descriptor 1 = stdout 
    mov rsi, msg   ; string adress 
    mov rdx, 14    ; string bytes 
    syscall 

    ; exit 
    mov rax, 60 ; syscall 60 = exit 
    syscall 
