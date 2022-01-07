/* 
Author : Varun
Description : A simple C program to demonstrave variables & datatypes
Date : 07-Jan-2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for size limits
#include <stdbool.h> // Boolean

int main() {
    
    // Character 
    char c ='A';
    char x = 90;
    unsigned char f = 'A';
    printf("%c\n",c);

    printf("%d\n",c); // Shows ascii value of character A

    printf("%d\n",x);

    printf("%c\n",x); // Shows ascii character value 

    printf("Byte Size of Character : %ld \n",sizeof(c));

    printf("Max Size of Character %d\n",CHAR_MAX);

    printf("Max Size of Unsigned Character %d\n",UCHAR_MAX);


    // Boolean

    bool b =true;
    
    printf("%d\n",b);

    bool k =false;
    
    printf("%d\n",k);

    


    return 0;



}