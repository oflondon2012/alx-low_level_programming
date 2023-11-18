#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * runbuiltins - executes builtin commands
 * @argv: array of inputed commands
 * @str: main call argument
 * Return: 1 (failed), otherwise runcommands
 */
int runbuiltins(char **argv, char *str)
{
	int count;
	char *builtin_commands[] = { "exit", "cd" };

	int numofbuiltins = sizeof(builtin_commands) / sizeof(char *);

	int (*builtin_functions[])(char **) = { &exit_shell, &cd_shell };

	if (argv[0] == NULL)
		return (1);

	for (count = 0; count < numofbuiltins ; count++)
	{
		if (_strcmp(argv[0], builtin_commands[count]) == 0)
			return ((*builtin_functions[count])(argv));
	}

	return (_executecmd(argv, str));
}
