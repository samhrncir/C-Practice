#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  luckyNumbers[1] = 200;
  printf("%d\n", luckyNumbers[1]);

  int moreNumbers[10];
  moreNumbers[1] = 80;
  moreNumbers[0] = 90;
  printf("%d\n", moreNumbers[0] );

  char phrase[20] = "Array";
  
  return 0;
}
