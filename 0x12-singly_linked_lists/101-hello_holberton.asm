 section .data
    hello db "Hello, Holberton",0
    format db "%s", 0
    newline db 10,0

 section .text
     extern printf


 global main
 main:
     push rbp
     mov rdi, format
     mov rsi, hello
     call printf
     mov rdi, format
     mov rsi, newline
     call printf
     pop rbp
     ret
