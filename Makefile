all: demo1 demo2 testshell

demo1:
  gcc -fno-stack-protector -z execstack demo1.c -o demo1
demo2:
  gcc demo2.c -o demo2
testshell:
  gcc -fno-stack-protector -z execstack testshell.c -o testshell

shell:
  nasm shell.asm -o shell.bin

helloworld:
  nasm helloworld.asm -o helloworld.bin

clean:
  rm -rf demo1 demo2 testshell shell.bin helloworld.bin
