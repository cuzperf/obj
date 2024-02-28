gcc -c a.c
gcc -c b.c
gcc a.o b.o
objdump -xsd a.out
