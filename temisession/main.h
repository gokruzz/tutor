#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <error.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
void freepointer(char **tokens);
int _div(int a, int b);

extern char **environ;
void processcommand(char **tokens);

#endif
