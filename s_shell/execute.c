#include "shell.h"

/**
 * command_execution - function that execute the commands
 * @strg: the input strings
 *
 * Return: void
 */

void command_execution(const char *strg)
{
	pid_t c_pid = fork();
	char *args[128], *token;
	int count = 0;

	if (c_pid == -1)
	{
		g_printf("Error cannot fork the process");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		token = strtok((char *)strg, " ");
		while (token != NULL)
		{
			args[count++] = token;
			token = strtok(NULL, " ");
		}
		args[count] = NULL;
		execvp(args[0], args);
		g_printf("Error executing command \n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
