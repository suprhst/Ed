/* 
Author : Varun
Description : A simple C program to demonstrave variables & datatypes
Date : 07-Jan-2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int variableOne;
    int variableTwo = 10;
    variableOne = 25;
    int varSum = variableOne + variableTwo;
    printf("%d + %d = %d \n",variableOne,variableTwo,varSum);

    variableOne = 15;
    varSum = variableOne + variableTwo ;
    printf("%d + %d = %d \n\n\n",variableOne,variableTwo,varSum);


    // Integers  %d place holder

    printf("%d\n ",variableOne);
    printf("byte size of variable : %ld \n",sizeof(variableOne));

    // To find max/min value an integer can hold use 

    printf("Max Int Value : %d\n ",INT_MAX);
    printf("Min Int Value : %d\n  \n \n",INT_MIN);

    // short
    short d = 5;  // %d place holder
    printf("%d\n",d);
    printf("byte size of short variable : %ld \n",sizeof(d));

    printf("Max Short Value : %d\n ",SHRT_MAX);
    printf("Min Short Value : %d\n \n \n ",SHRT_MIN);

    // long

    long e =3285674562224564;  // %ld - place holder

    printf("%ld\n",e);

    printf("byte size of long variable : %ld \n",sizeof(e));

    printf("Max long Value : %ld\n ",LONG_MAX);
    printf("Min long Value : %ld\n \n \n",LONG_MIN);

    // LOng Long

    long long f = 2136516132132454612; // %lld - place holder

    printf("%lld\n",f);

    printf("byte size of long-long variable : %ld \n",sizeof(f));

    printf("Max long-long Value : %lld\n ",LLONG_MAX);
    printf("Min long-long Value : %lld\n \n \n",LLONG_MIN);

    //Unsigned 
    unsigned int g =1234;

    printf("%u\n",g);

    printf("byte size of Unsigned int variable : %ld \n",sizeof(g));

    printf("Max Unsigned int Value : %d\n ",UINT_MAX);
    
    long int h =21321321;

    printf("%lu\n",h);

    printf("byte size of Unsigned int variable : %ld \n",sizeof(h));

    printf("Max Unsigned Long Value : %llu\n ",ULLONG_MAX);




    return 0;



}