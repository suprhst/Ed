/* 
Author : Varun
Description : A simple C program to demonstrate Arrays
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>

int main() {
    

    int myVar1[] ={1,2,3,4};

    printf("%d\n",myVar1[0]);
    printf("%d\n",myVar1[1]);
    printf("%d\n",myVar1[2]);
    printf("%d\n\n\n\n",myVar1[3]);
    


    for (int i=0; i<4; i++) {
        printf("%d\n",myVar1[i]);
    } 

    int myVar2[4] = {};

    for (int i=0; i<4; i++) {
        printf("%d\n",myVar2[i]);
    } 

    return 0; // Sucessful run 
    
}