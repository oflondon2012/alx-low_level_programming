#include "main.h"
/**
 * _executecmd - execute the commands with path
 * @argv: array pointer of commands
 * @str: string of app name
 * Return: 0 success
 */
int _executecmd(char **argv, char *str)
{
	char *token = NULL;
	char *full_token_path = NULL;

	if (argv)
	{
		/* get the first command */
		token = argv[0];

		/* get the path and add to command */
		full_token_path = _getpath(token);

		if (execve(full_token_path, argv, NULL) == -1)
		{
			perror(str);
		}
	}
	return (0);
}

