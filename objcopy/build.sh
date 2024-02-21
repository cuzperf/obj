# 也可以用 xdd 产生 data.h 使用
objcopy -I binary -O elf64-x86-64 -B i386:x86-64 objcopy.png objcopy.o
objdump -dt objcopy.o
gcc main.c objcopy.o
./a.out
