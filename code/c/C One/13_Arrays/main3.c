/* 
Author : Varun
Description : A simple C program to demonstrate Arrays
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>

int main() {

    int myArray[2][3] = {{2,4,7},{1,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\n",myArray[i][j]);
        }

    }
    
 
    return 0; // Sucessful run 
    
}

