/* 
Author : Varun
Description : A simple C program to demonstrate strings constants and typecasting
Date : 07-Jan-2021
*/


// Header Files 
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Constants 

    int a = 10;
    printf("%d\n",a);
    a = 20 ;
    printf("%d\n",a);

    const int VARIABLE = 10; // cannot be modified as above value remains constant  variable name usually defined as uppercase
    printf("%d\n\n",VARIABLE);

    // Strings 

    printf("Hello \n");
    printf("%s","HELLO \n\n"); 

    // string is a collection of character

    char myString[10] = "Hello"; // string is character array
    printf("%s\n\n",myString);


    // Typecasting or conversion 

    int x = (int) 'A';
    printf("%d\n",x);

    char y = (char) 64; // will display @ the ascii value of 64 in print func
    printf("%c\n",y);

    int k = (int) 2.6; // convert float to dec
    printf("%d\n",k);

    float l = (float) 10;
    printf("%f\n",l);

    // String to int

    char myStr[10] = "1770";
    int i = atoi(myStr);
    printf("%d\n",i +10);  

    // String to double 

    char sTr[10] = "1770.22";
    int j = atof(sTr);  // man atoi in console will give programmers manual 
    printf("%f\n",j +10.3);

    char reV[10] ;
    int g =20;
    sprintf(reV,"%d\n",g);
    printf("%s\n",reV);

    return 0; // Sucessful run 
    
}