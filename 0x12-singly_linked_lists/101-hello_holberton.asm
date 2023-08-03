section .data
    my_message db 'Hello, Holberton', 0xa,  0

section .text
    global main
    extern printf

main:
    mov rdi, my_message 
    xor rax, rax        
    call printf         
    xor rax, rax
    ret

