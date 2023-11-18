#include "shell.h"

/**
 * main - main function of the shell
 *
 * Return: always return 0
 */

int main(void)
{
	char strg[120];

	while (true)
	{
		get_prompt();
		r_command(strg, sizeof(strg));
		command_execution(strg);
	}
	return (0);
}
