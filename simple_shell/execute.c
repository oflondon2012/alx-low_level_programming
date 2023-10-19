#include "main.h"

/**
 * ge_buildin_check - function that check if the command is a buildin
 * @strg: pointer to argument array
 *
 * Return: pointer to the function which take arg or return noting
 */
void(*ge_buildin_check(char **strg))(char **strg)
{
	int i = 0, j = 0;

	GeBuildin T[] = {
		{"exit", ge_exit},
		{"env", ge_environ},
		{"setenv", ge_setenviron},
		{"unsetenv", ge_unsetenv},
		{NULL, NULL}
	};
	while (T[i].name)
	{
		while (T[i].name[j] == strg[0][j] && T[i].name[j] != '\0')
		{
			if (T[i].name[j] == '\0')
				return (T[i].func);
			j++;
		}
		i++;
	}
	return (NULL);
}
/**
 * ge_getenviron - function that get the value of global variable
 * @name: name of the variable
 *
 * Return: string value
 */
char *ge_getenviron(const char *name)
{
	int i, j;

	if (name == NULL)
		return (NULL);
	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; name[j] != '\0' && name[j] == environ[i][j]; j++)
			;
		if (name[j] == '\0' && environ[i][j] == '=')
			return (environ[i] + j + 1);
	}
	return (NULL);
}

/**
 * ge_handleEOF - function that handle end of File
 * @lenn: value of what is in the getline function
 * @buf: the buffer
 *
 * Return: void
 */
void ge_handleEOF(int lenn, char *buf)
{
	if (lenn == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			ge_puts("\n");
			free(buf);
		}
		exit(0);
	}
}

/**
 * ge_signal_c - function that handle signal
 * @sig_num: number of signal
 *
 * Return: void
 */
void ge_signal_c(int sig_num)
{
	if (sig_num == SIGINT)
	{
		ge_puts("\n#cicfun$ ");
		fflush(stdout);
	}
}

