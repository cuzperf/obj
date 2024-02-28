gcc -c -fno-builtin TinyHelloWorld.c
ld -static -e nomain -o TinyHelloWorld1 TinyHelloWorld.o
echo "Runing TinyHelloWorld1"
./TinyHelloWorld1
echo $?
ld -static -T TinyHelloWorld.lds -o TinyHelloWorld2 TinyHelloWorld.o
echo "Runing TinyHelloWorld2"
./TinyHelloWorld2
echo $?
