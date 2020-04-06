#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int index = 1;
  while(index <= 5) {
    printf("%d\n", index);
    /*index = index + 1;*/
    index++;
  }

  index = 1;
  do{
    printf("%d\n", index);
    index++;
  } while(index <= 5);



  return 0;
}
