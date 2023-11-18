#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: argument vectors
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{

	/* variables to manage inputs */
	char *inputline;
	char **args = NULL;
	size_t c_count = 0;
	ssize_t nreadchar = 0; /* number of read chars */

	(void)argc;

	while (1)
	{
		printf("($) ");
		nreadchar = getline(&inputline, &c_count, stdin);

		/* handle end of file condition */
		if (nreadchar == -1)
		{
			return (-1);
		}

		/* create mem and load commands */
		args = loadcommands(inputline);

		runbuiltins(args, argv[0]);
	}

	free(args);
	free(inputline);
	return (0);
}
