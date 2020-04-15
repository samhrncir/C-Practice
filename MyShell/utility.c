/*
  Program: utility.c
  Programmer: Sam Hrncir
  Instructor: Professor Mittal
  Created: April 7, 2020
  Updated: April 14, 2020
*/
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


/* My implemented commands */
void myclr(void) {
  printf("\e[1;1H\e[2J");
}

void myquit(void) {
  kill (getppid(), 9);
}


void mypause(void) {
  printf("Press Enter to Continue\n");
  char in = 'm';
  while( in !=  '\n')
  in = getchar();
}


void myecho(char *argv[20]) {
  int i = 1;
  while(argv[i] != NULL){
    printf("%s ", argv[i]);
    i = i + 1;
  }
  printf("\n");
}


void mydir(char *argv[20]) {
/*
  Below solution sourced from
  https://www.gnu.org/software/libc/manual/html_node/Simple-Directory-Lister.html
*/
  DIR *dp;
  struct dirent *ep;

  if (argv[1] != NULL) {
   dp = opendir (argv[1]);
  } else {
    dp = opendir (".");                // If no location specified, default to current dir.
  }
  if (dp != NULL) {
     while ((ep = readdir (dp)))      // Sorrounded statement in parentheses to surpress warning.
       puts (ep->d_name);
     (void) closedir (dp);
   } else
    perror ("Couldn't open the directory");
}
