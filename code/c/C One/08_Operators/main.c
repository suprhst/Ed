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
    
    int x = 10; // Asignment Operator
    int y = 20;
    int z = x + y;
    
     // Addition
    
    printf("Sum = %d\n",z);

    //Substraction
    z = y - 5;
    printf("Substraction = %d\n",z);

    // Multiplication

    z = x * y;
    printf("Multiplied  = %d\n",z);

    // Division

    z = x / 2;
    printf("Division = %d\n",z);

    // Modulus

    z = x % 2;
    printf("Modulus = %d\n",z);

    int j = 12;
    printf("%d\n",j);
    j = j + 1;
    printf("%d\n",j);
    j += 1; // same as above (works for all operations (+ - * / %))
    printf("%d\n",j);

    // Comparison 

    int a = 10;
    int b = 15;
    printf("%d\n",a < b);  // Prints boolean values  0 if false 1 if true
    printf("%d\n",a > b); 
    printf("%d\n",a == b); // comparison
    printf("%d\n",a != b); // not equal
    printf("%d\n",a <= b);
    printf("%d\n",a >= b);

    // Logical 

    printf("%d\n",((a<b)&&(a>b)));
    printf("%d\n",((a<b)||(a>b)));
    printf("%d\n",!(a<b));



    return 0; // Sucessful run 
    
}
