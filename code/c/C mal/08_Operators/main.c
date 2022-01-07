/* 
Author : Varun
Description : A simple C program to demonstrate operators
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Main Function 
    
    int x =10; // Asignment Operator
    int y =20;
    int z = x + y; // Addition
    printf("Sum = %d\n",z);

    //Sub
    z = y - 5;
    printf("Substraction = %d\n",z);

    // Multiplication

    z = x * y;
    printf("Multiplied  = %d\n",z);

    z = x / 2;
    printf("Division = %d\n",z);

    z= x % 2;
    printf("Modulus = %d\n",z);
     


    return 0; // Sucessful run 
    
}