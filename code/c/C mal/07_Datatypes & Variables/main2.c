/* 
Author : Varun
Description : A simple C program to demonstrave variables & datatypes
Date : 07-Jan-2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    // Float %f place Holder

    float f =13.345678; // not precise over 6 decimal places
    printf("%f\n",f);
    printf("Byte Size of float : %ld\n\n",sizeof(f));
    printf("Max Value of Float : %f\n",FLT_MAX);
    printf("Min Value of Float : %f\n\n",FLT_MIN);

    // Double

    double g =12.12345678912345;

    printf("%.14f\n",g);  // %.nf n -number for precision (still not precise over 15 points after . )
    printf("Byte Size of Double : %ld\n\n",sizeof(g));

    printf("Max value of Double %f\n",DBL_MAX);
    printf("Min value of Double %f\n",DBL_MIN);

    //Long Double

    long double p ;
    printf("Byte size of Long Double = %ld \n",sizeof(p));




    return 0;



}