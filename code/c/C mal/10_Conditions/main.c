/* 
Author : Varun
Description : A simple C program to demonstrate conditional statements
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a; 
    int b;

    printf("\nEnter a number : ");
    scanf("%d",&a);
    printf("\nEnter a number : ");
    scanf("%d",&b);

    // If Else Statement

    

    if (a>b) {
        printf("\n%d is greater\n",a);
    } 
    else if (a==b){
        printf("\n%d is equal to %d \n",a,b);
    } 
    else {
        printf("\n%d is greater \n",b);
    }

    // Multiple if

    if(a==1){
        if(b==2){
            printf("\nYou just entered a = 1, b =2 \n");
            printf("\nThe sum of 1 + 2 = 3\n");

        }
    }
    
    


    // Switch case 

    switch(a) {
        
        case 1:
        printf("One \n");
        break;
        
        case 2:
        printf("Two \n");
        break;
        
        case 3:
        printf("Three \n");
        break;
        
        case 4:
        printf("Four \n");
        break;
        
        case 5:
        printf("Five \n");
        break;
        
        case 6:
        printf("Six \n");
        break;
        
        case 7:
        printf("Seven \n");
        break;
        
        case 8:
        printf("Eight \n");
        break;
        
        case 9:
        printf("Nine \n");
        break;

        default:
        printf("Not in list\n");
        break;



    }

    return 0; // Sucessful run 
    
}