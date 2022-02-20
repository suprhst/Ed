#include <stdio.h>

int main() {



// Pointer of another pointer
    int a = 10;

    int *myPointer = &a;

    int **pointerPointer = &myPointer;

    printf("%p\n",&a); // memory address of a
    printf("%p\n",&myPointer); // Memory address of mypointer
    printf("%p\n\n\n",&pointerPointer); // memoryaddress of pointerPointer(pointer points to pointer named mypointer )


    // Dereferencing(get values inside pointer (value stored in that memory space))

    printf("%d\n",a); // decimal value 10
    printf("%d\n",*myPointer); // decimal value 10
    printf("%p\n",*pointerPointer); // memory address of myPointer's point
    printf("%d\n",**pointerPointer); // value to which the pointer points


    return 0;
}