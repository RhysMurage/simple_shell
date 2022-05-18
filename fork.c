#include "main.h"

/**
  * execute- run commands passed by the user
  * @argv: pointer to a list of commands
  *
  * Return: Always(0)
  */

int execute(char *argv[])
{
	pid_t childId;
	int status = 1;

	childId = fork();

	if (childId == 0)
	{
		/* Child now executes */
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("No such file or directory");
			return (1);
		}
	}
	else if (childId < 0)
	{
		perror("Error in forking");
		exit(1);
	}

	else
		wait(&status);
	return (0);
}
