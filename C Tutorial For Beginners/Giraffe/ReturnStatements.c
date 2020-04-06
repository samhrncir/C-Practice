#include <stdio.h>
#include <stdlib.h>

double cube(double num); /* Prototype */

int main(int argc, char const *argv[]) {

  printf("Answer: %f", cube(3.0));

  return 0;
}

double cube(double num){
  /*double result = num * num * num;
  return result;*/
  return num * num * num;
  printf("Dosen't Run\n");
}
