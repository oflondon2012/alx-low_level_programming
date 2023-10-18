#include "shell.h"

/**
 * ge_environ - function that prints the current environment
 * @argv: arguments
 *
 * Return: void
 */
void ge_environ(char **argv __attribute__ ((unused)))
{
	int j = 0;

	while (environ[j])
	{
		ge_puts(environ[j]);
		ge_puts("\n");
	}
}
/**
* ge_exit - exits the program with an optional status code
* @ards: an array of arguments, including the command itself
*/
void ge_exit(char **ards)
{
	int status = 0, i;

	if (ards[1])
	{
		status = ge_atoi(ards[1]);
		if (status < 0)
		{
			status = 2;
		}
	}
	for (i = 0; ards[i]; i++)
	{
		free(ards[i]);
	}
	free(ards);
	exit(status);
}
/**
 * ge_atoi - converts a string into an integer number
 * @strg: pointer to the input string
 *
 * Return: the converted integer
 */
int ge_atoi(char *strg)
{
	int i = 0, result = 0, sign = 1;

	while (strg[i] != '\0')
	{
		if (strg[i] == '-')
			sign *= -1;
		else if (strg[i] >= '0' && strg[i] <= '9')
			result = (result * 10) + (strg[i] - '0');
		else
			break;
		i++;
	}
	return (result * sign);
}
/**
 * ge_setenviron - set a new environment variable
 * @strg: pointer to array of input string
 */
void ge_setenviron(char **strg)
{
	int i = 0;
	int j = 0, k = 0;

	if (!strg[1] || !strg[2])
	{
		perror(ge_getenviron("_"));
		return;
	}

	while (environ[i])
	{
		if (strg[1][j] == environ[i][j])
		{
			while (strg[1][j])
			{
				if (strg[1][j] != environ[i][j])
					break;

				j++;
			}
			if (strg[1][j] == '\0')
			{
				while (strg[2][k])
				{
					environ[i][j + 1 + k] = strg[2][k];
					k++;
				}
				environ[i][j + 1 + k] = '\0';
				return;
			}
		}
		i++;
	}
	if (!environ[i])
	{
		environ[i] = ge_concat_str(strg[1], "=", strg[2]);
		environ[i + 1] = NULL;
	}
}

/**
 * ge_unsetenv - delete an environment variable
 * @strg: pointer to input string
 */
void ge_unsetenv(char **strg)
{
	int i = 0, j = 0;

	if (!strg[1])
	{
		perror(ge_getenviron("_"));
		return;
	}
	while (environ[i])
	{
		if (strg[1][j] == environ[i][j])
		{
			while (strg[1][j])
			{
				if (strg[1][j] != environ[i][j])
					break;

				j++;
			}
			if (strg[1][j] == '\0')
			{
				free(environ[i]);
				environ[i] = environ[i + 1];
				while (environ[i])
				{
					environ[i] = environ[i + 1];
					i++;
				}
				return;
			}
		}
		i++;
	}
}
