#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main(int argc, char const *argv[]) {

  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.2;
  strcpy( student1.name, "Jim");
  strcpy( student1.major, "Business");

  struct Student student2;
  student2.age = 21;
  student2.gpa = 4.0;
  strcpy( student2.name, "Marisa");
  strcpy( student2.major, "EarthScience");

  printf("%d", student2.age);

  return 0;
}
