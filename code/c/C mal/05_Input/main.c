/* 
Author : Varun
Description : A simple C program to Input Variables
Date : 07-Jan-2021
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

     
    char nameValue[15];
    int ageValue;
    double heightValue;

    printf("Enter Your Name : ");
    scanf("%s",nameValue);
    printf("Enter Your Age :");
    scanf("%d",&ageValue);  // & for Non string VALUES
    printf("Enter Your Height");
    scanf("%lf",&heightValue); // Double place holder %lf (long float)

    printf("Hello %s\n",nameValue);
    printf("Your Age is : %d\n",ageValue);
    printf("Your Height is : %f CM\n",heightValue);
    printf("Hope you have a wonderful day \n");



    return 0;



}