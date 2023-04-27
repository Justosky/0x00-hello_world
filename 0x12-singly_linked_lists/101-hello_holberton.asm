section .data
    msg db 'Hello, Holberton', 0Ah, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Call printf to print the message
    mov rdi, msg
    xor eax, eax
    call printf

    ; Clean up the stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

