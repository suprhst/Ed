/* 
Author : Varun
Description : A simple C program to demonstrate conditional statements
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    // ternary 
    bool myState = false;

    printf(myState ? "True\n" : "False\n"); // if is true print true else if false print false 


    myState = true;

    printf(myState ? "True\n" : "False\n");

    return 0;
}
