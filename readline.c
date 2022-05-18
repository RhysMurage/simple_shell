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
	int len = 0;

	characters = getline(&buffer, &bufsize, stdin);
	if (len == -1)
	{
		free(buffer);
		return (NULL);
	}
	if (buffer[len - 1] == '\n')
		buffer[len - 1] = '\0';

	return (buffer);
}


