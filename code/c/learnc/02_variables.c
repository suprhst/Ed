#include <stdio.h>

int main() {
  // Integers
  int a;
  a = 10;
  int b = 20;
  //c = a+b; Wrong Because c is un declared
  int c = a + b;
  printf("Integer Value  %d",c);
  // FLoats

  float x;
  x = 10.3;
  printf("\nFloating value %f\n",x);

  // Double

  double y = 4243.546;
  printf("The double value is %f\n",y);

  // character

  char chVar = 'Z';
    printf("Char = %c\n",chVar);

    // constants

    const double pI = 3.14;
    printf("Value of pi : %f",pI);

    

  return 0;
}
