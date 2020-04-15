SOURCES = myshell.c utility.c					# other C files
OBJECTS = myshell.o
HEADERS = myshell.h										# header files
CC = gcc
CFLAGS = -g -Wall

myshell:$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o myshell
clean:
		rm -fR *o myshell
