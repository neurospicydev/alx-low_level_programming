section .data
    message db "Hello, Holberton", 0
    format db "%s", 10, 0  ; "%s" is the format specifier for a string, 10 is the ASCII code for a new line

section .text
    global main
    extern printf

main:
    push rbp         ; Set up the base pointer
    mov rdi, format  ; Load the format string address
    mov rsi, message ; Load the message string address
    xor rax, rax     ; Clear RAX register (used as return value)
    call printf     ; Call the printf function
    pop rbp          ; Restore the base pointer
    ret              ; Return from main
