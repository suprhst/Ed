/* 
Author : Varun
Description : A simple C program to Functions
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

void disVal (); // declare func with no return value  
/* can also do as 
void disVal(void){
    for(int i=0;i<5;i++){
         printf("Hello World \n");
}

or 

void disVal(){
    for(int i=0;i<5;i++){
         printf("Hello World \n");
}
*/
int main() {
    disVal();
    return 0;
} // end of main func



void disVal(){ // FUnc body 
    for(int i=0;i<5;i++){
        printf("Hello World \n");
    }
}