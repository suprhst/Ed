/* 
Author : Varun
Description : A simple C program to Functions
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

int add (int a,int b); // Declare the function 
int main() {
    int c = add(10,3);

    printf("%d\n",add(10,3));

    printf("%d\n",c);
    return 0;
} // end of main func

int add (int a,int b) {   // Define the func body 
    return a + b;
}