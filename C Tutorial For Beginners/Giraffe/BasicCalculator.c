#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double num1;
  double num2;
  printf("Enter first number: " );
  scanf("%lf", &num1);
  printf("Enter second number: " );
  scanf("%lf", &num2);

  printf("Answer: %f\n", num1 + num2 );

  return 0;
}
