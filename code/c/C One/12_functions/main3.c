/* 
Author : Varun
Description : A simple C program to Functions
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEven(int a); // Declare global Func

int main() {
    int i;
    printf("Enter A Number : ");
    scanf("%d",&i);
    
    if(isEven(i)) {  // Call the Func
        printf("%d is Even\n",i);
    } else {
    printf("%d is Odd\n",i);
    }

    return 0;
} // end of main func

bool isEven(int a){             // Define global func 
    return (a % 2) == 0;
}
