gcc -c SimpleSection.c
readelf -h SimpleSection.o
objdump -x -s -d SimpleSection.o
