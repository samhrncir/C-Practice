#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {


  int age = 30;
  int *pAge = &age;

  printf("%d\n", *&*&age );

  return 0;
}
