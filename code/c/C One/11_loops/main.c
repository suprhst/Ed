/* 
Author : Varun
Description : A simple C program to demonstrate Loops
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>


int main() {
    int i =0;
    // While loop 

    while (i<10){
        printf("%d.Hello\n",i);
        i++;    // i++ = i + 1 after op , ++i = 1+i before op (post & pre increment) similarly --i & i--
        }

    // Do While loop 
    i =0;
    do {
        printf("%d \n",++i);
        }
        while (i<10);

    // For loop

    for(i=0;i<10;i++){
        printf("%d World \n",i);
    }

    return 0;
}
