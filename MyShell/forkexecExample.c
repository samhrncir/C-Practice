// forkexec: create a new process.
// The child runs "ls -aF /". The parent wakes up after 5 seconds.

#include <stdlib.h>       // needed to define exit()
#include <unistd.h>       // needed for fork() and getpid()
#include <stdio.h>       // needed for printf()
#include <wait.h>        // needed for wait()

void runit(void) {
  printf("About to run ls\n");
  execlp("ls", "ls", "-aF", "/", (char*)0);
  perror("execlp");                             // if we get here, execlp failed
  exit(1);
}

int main(int argc, char const *argv[]) {

  int pid;                                      // process ID

  switch (pid = fork()) {
    case 0:                                     // a fork return 0 to child
      runit();
      break;

    default:                                    // a fork returns a pid to the parent
      wait(NULL);                               // wait for child to terminate
      printf("I'm still here!\n");
      break;

    case -1:
      perror("fork");
      exit(1);
  }
  exit(0);

  //return 0;
}
