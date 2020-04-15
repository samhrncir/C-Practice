/*
Program: myshell.c
Programmer: Sam Hrncir
Instructor: Professor Mittal
Created: April 7, 2020
Updated: April 13, 2020
*/
#include <stdlib.h>       // needed to define exit()
#include <unistd.h>       // needed for fork(), getpid(), getcwd()
#include <stdio.h>        // needed for printf()
#include <wait.h>         // needed for wait()
#include <string.h>       // needed for strtok()
#include "myshell.h"      // needed for implemented commands

int myexecvp(char* cmd, char* argv[20]) {
  //printf("%s\n", cmd);
  if (strcmp(cmd, "myclr") == 0) {
    myclr();
  } else if (strcmp(cmd, "myquit") == 0) {
    myquit();
  } else if (strcmp(cmd, "mypause") == 0) {
    mypause();
  } else if (strcmp(cmd, "myecho") == 0) {
    myecho(argv);
  } else if (strcmp(cmd, "mydir") == 0) {
    mydir(argv);
  } else {
    return -1;
  }
  return 1;
};


int main(void) {

  int MYPATH_MAX = 260;                           // named MYPATH instead of MYPATH, possible
  int COMMAND_MAX = 300;                          //    interference with <dirent.h>
  char DELIMITER[4] = " \n";                      // TODO: Could be expanded for all white space chars

  while(1 == 1) {
    /* prompt user */
    char cwd[MYPATH_MAX];
    getcwd(cwd, sizeof(cwd));
    printf("%s/myshell:", cwd);

    /* read in user input */
    char inLong[COMMAND_MAX];
    fgets(inLong, COMMAND_MAX, stdin);

    /* parse input */
    char* argv[20] = { NULL };
    char* nextToken;

    nextToken = strtok(inLong, DELIMITER);
    argv[0] = nextToken;

    int i = 1;
    while( nextToken != NULL ){
      nextToken = strtok(NULL, DELIMITER);
      if(nextToken != NULL ){
        argv[i] = nextToken;
      }
      i = i + 1;
    }

    /* start new process */
    int pid;                                      // process ID
    switch (pid = fork()) {
      case 0:                                     // a fork return 0 to child
        if (myexecvp(argv[0], argv) == -1) {      // Check to see if process is native to program.
    /* overwrite process */                       //    if so, run the function.
          execvp(argv[0], argv);
          perror("execvp");
          exit(1);
        }
        exit(1);
      default:                                    // a fork returns a pid to the parent
        wait(NULL);                               // wait for child to terminate
        break;
      case -1:
        perror("fork");
        exit(1);
    }
  }
}
