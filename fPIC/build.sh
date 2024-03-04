gcc -fPIC -shared -o fPic.so fPic.c
readelf -h fPic.so
objdump -xsd fPic.so
objdump -R fPic.so
