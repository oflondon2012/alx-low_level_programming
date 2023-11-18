#define TOKEN_BUFSIZE 120
#include "main.h"
#include <string.h>
/**
 * loadcommands - load each command into args
 * @inputstr: input string pointer
 * Return: array of arrays
 */
char **loadcommands(char *inputstr)
{
	int i = 0;
	const char *delim = " \a\n\r\t";
	char *token;

	/* create mem space for argv */
	char **tokens = malloc(sizeof(char *) * TOKEN_BUFSIZE);

	if (tokens == NULL)
	{
		fprintf(stderr, "unable to allocate memory\n");
		exit(1);
	}

	/* fill array with tokens */
	token = _strtok(inputstr, delim);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		token = _strtok(NULL, delim);
	}
	tokens[i] = NULL;


	return (tokens);
}

