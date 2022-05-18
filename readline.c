#include "main.h"

/**
  * readline - Reads the user input from standard input
  *
  * Return: The line that was read if succesful and NULL if it failed
  */

char *readline(void)
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	characters = getline(&buffer, &bufsize, stdin);
	if (buffer[characters - 1] == '\n')
		buffer[characters - 1] = '\0';

	return (buffer);
}


