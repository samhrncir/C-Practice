#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade );

  return 0;
}
