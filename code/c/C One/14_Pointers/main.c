#include<stdio.h>

int main() {

    int a = 10;
    int b = 20;
    char c = 'A';
    int d = 25;

    printf("%p\n",&a); // Prints memory address of a 4 bytes
    printf("%p\n",&b); 
    printf("%p\n",&c); // 1 byte
    printf("%p\n",&d);
    return 0;
}