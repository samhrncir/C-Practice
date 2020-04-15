File: readme.txt
Programmer: Sam Hrncir
Instructor: Professor Mittal
Created: April 7, 2020
Updated: April 14, 2020

--Introduction--
This Program was written as an exercise for my Operating Systems course at Dickinson College.
The exercise showcases concepts in process forking, program calling, and simple shell design.
Myshell is a simple implementation of a shell or command-line.  The program includes some naively
implemented commands that you can read about in the section "Native Commands".  Myshell is able
to run any other commands through the use of the function execvp.

--Requirements--
  Linux based OS
  Source code saved locally

--How to Run Myshell--
1. Ensure you have the make program.
     Run 'make'
   If not install it
     Run 'sudo apt install make'

2. Build Myshell
     Run 'make' withing the directory of the source code.

3. Run Myshell
     Run '[path to file]/myshell'

4. Quiting Myshell
     Run 'myquit' within Myshell
        -or-
     Press ctr + C


--Running Commands on Myshell--
Myshell behaves and uses similarly to standard shells and command lines.
Commands can not be longer than 300 characters.
Type in the command and then press enter.

--Native Commands--
  * 'myclr' - clear the screen.

  * 'myquit' - quit the shell.

  * 'mypause' - pause operation of the shell until 'Enter' is pressed.

  * 'myecho <comment>' - display <comment> on the display followed by a new line.

  * 'mydir <directory>' - lists the content of directory <directory>.
