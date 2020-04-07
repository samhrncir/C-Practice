#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int age = 30;
  int * pAge = &age;
  double gpa = 3.4;
  double * pGPA = &gpa;
  char grade = 'A';
  char * pGrade = &grade;



  printf("age's memory address: %p\n", &age);
  return 0;
}
