#include "main.h"

/**
  * main- function that displays prompt and reads input from stdin
  * @argc: integer variable for number of arguments passed
  * @argv: pointer to command arguments
  *
  * Return: Always (0);
  */

int main(int argc, char **argv)
{
	int status = 1;
	char *line;
	char **tokens;
	char *delimiters = " :'\n''\t'";

	while (status)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);

		/* End of file */
		if (feof(stdin))
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		line = readline();
		tokens = tokenize(line);
		execute(tokens);
	}

	return (0);
}
