#include<stdio.h>

int main() {

    int a = 10;
    int *myPointer = &a; // pointer (maps to memory address)


    printf("%p\n",&a);
    printf("%p\n",myPointer); // points to memory address both values represent memory address
    printf("%d\n",*myPointer); // dereference to get value inside that memory location
    
    // Changing Values 

    *myPointer = 25; // replace value in that memory address (address of a for this case)
    printf("%d\n",a); // value of a changed from 10 to 25 by replacing value in the memory address of a
    
    
    // size of pointer

    printf("%ld\n",sizeof(myPointer)); // size in bytes (because 64 bit its going to be 8 bytes)

    // Memory address of pointer

    printf("%p\n",myPointer); // memory address of point(a for this example)
    printf("%p\n",&myPointer); // memory address of pointer
    
    return 0;
}