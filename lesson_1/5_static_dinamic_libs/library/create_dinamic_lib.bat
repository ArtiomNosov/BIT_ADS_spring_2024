gcc -c -fPIC source/*.c
gcc -shared -o libmy2.so *.o
rm *.o