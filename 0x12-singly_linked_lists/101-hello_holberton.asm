section .data
    hello db 'Hello, Holberton', 0xA, 0 ; 0xA is newline, and 0 is the null terminator.

section .text
    extern printf  ; Declare printf as an external function
    global print_hello  ; Make print_hello accessible from other files

print_hello:
    ; Prepare the arguments for printf
    mov rdi, hello ; The address of the string to be printed
    call printf    ; Call the printf function
    ret            ; Return to the caller
