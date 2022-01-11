/* 
Author : Varun
Description : A simple C program to demonstrate conditional statements
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

int main() {



//Switch case Character 

    char c;
    printf("\nInput a character ");
    scanf("%c",&c);

    switch (c) {
    
    case 'A':
    printf("\n A \n");
    break;

    case 'B':
    printf("\n B\n");
    break;

    default:
    printf("\nNot on list\n");
    break;

    }
    return 0;

    }