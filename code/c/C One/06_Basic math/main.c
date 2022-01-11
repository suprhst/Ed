/* 
Author : Varun
Description : A simple C program to perform Basic math
Date : 07-Jan-2021
*/

#include <bits/floatn-common.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

     
    int numOne;
    int numTwo;
    int sum;

    printf("Enter First No  :  ");
    scanf("%d",&numOne);
    printf("Enter Second No :");
    scanf("%d",&numTwo);  

    sum = numOne + numTwo;

    printf("Total Value : %d \n",sum);
    
    int sub = numOne-numTwo;

    printf("Substracted Value : %d\n",sub);




    return 0;



}