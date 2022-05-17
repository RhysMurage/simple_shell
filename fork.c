#include "main.h"

int execute(char *argv[], int argc)
{
	pid_t childId, tpid;

	childId = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("No such file or directory");
			return (1);
		}
	else if (childId < 0)
	{
		perror("Error in forking");
		exit(1)
	}
	else
	{
		do
		{
			tpid = waitpid(childId, &status, 

