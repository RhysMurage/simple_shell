#include "main.h"

/**
  * main- function that displays prompt and reads input from stdin
  * @argc: integer variable for number of arguments passed
  * argv: pointer to strings
  *
  * Return: Always (0);
  */

/** command line prompt **/
char prompt[] = "$ ";

int main(int argc, char **argv)
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;
	int status = 1;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
	        exit(1);
	}

	while (status)
	{
		printf("%s", prompt);
		characters = getline(&buffer, &bufsize, stdin);

		if (characters == 0 && ferror(stdin))
			perror("Error");

		/* End of file */
		if (feof(stdin))
		{
			printf("\n");
			exit(0);
		}
	}

	return (0);
}
	
