/* 
Author : Varun
Description : A simple C program to demonstrate Arrays
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>

void print_array(int array[],int lengthArray);

int main() {
    

    int myVar1[] ={1,2,3,4};
    print_array(myVar1,4);

    // Byte size of array 
    printf("Memory Size of array : %ld bytes\n",sizeof(myVar1));

    // Length of array  
    printf("Length of array  : %ld units \n",sizeof(myVar1)/sizeof(myVar1[0])); // size of whole array /size of single element

 
    return 0; // Sucessful run 
    
}


void print_array(int array[],int lengthArray){
    for(int i=0;i < lengthArray;i++){
        printf("%d\n",array[i]);
    }
}