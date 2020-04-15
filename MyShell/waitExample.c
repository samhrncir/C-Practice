#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>

int main(void) {
  pid_t pid;
  pid = fork();
  if(pid == 0) {          // instead of if else in previous examples we used if here
    printf("child\n");
    exit(0);              // child process will terminate on seeing exit and will never
  }                       // go to line following if block
  wait(NULL);             // these instructions will be executed by the parent
  printf("parent\n");
  return 0;
}
