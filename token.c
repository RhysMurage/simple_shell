#include "main.h"
#define BUFSIZE 1024

char **tokenize(char *line)
{
	int bufsize = BUFSIZE;
	char **tokens;
	char *token;
	char *delimiters = " :'\n''\t'";
	int len = 0;

	tokens = malloc(sizeof(char *) * bufsize);
	token = strtok(line, delimiters);

	while(token != NULL)
	{
		tokens[len] = strdup(token);
		token = strtok(NULL, delimiters);
		len++;
	}
	tokens[len] = token;

	return(tokens);
}
