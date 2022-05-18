#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char **argv);

int _putchar(char c);

int _strlen(char *s);

unsigned int _strspn(char *s, char *accept);

char *_strncpy(char *dest, char *src, int n);

int execute(char *argv[]);

char *readline(void);

char **tokenize(char *line);
#endif /* _MAIN_H */
