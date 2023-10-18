#include "shell.h"

/**
 * ge_term - function used to verify the terminal
 *
 * Return: void
 */
void ge_term(void)
{
	if (ge_term(STDIN_FILENO))
		ge_puts("#cisfun$ ");
}

/**
 * main - function to execute the shell tasks
 *
 * Return: Always 0 on success
 */
int main(void)
{
	list_path *head = NULL;
	ssize_t lenn = 0;
	size_t size = 0;
	char *pathname, *buf = NULL, *value, **strg;
	void (*ge)(char **);

	signal(SIGINT, ge_signal_c);
	while (lenn != -1)
	{
		ge_term();
		lenn = getline(&buf, &size, stdin);
		ge_handleEOF(lenn, buf);
		strg = ge_splitString(buf, " \n");
		if (!strg || !strg[0])
			ge_execute(strg);
		else
		{
			value = ge_getenviron("PATH");
			head = ge_lnpath(value);
			pathname = ge_pathname(strg[0], head);
			ge = ge_buildin_check(strg);
			if (ge)
			{
				free(buf);
				ge(strg);
			}
			else if (!pathname)
				ge_execute(strg);
			else if (pathname)
			{
				free(strg[0]);
				strg[0] = pathname;
				ge_execute(strg);
			}
		}
	}
	ge_freelist(head);
	ge_freestrg(strg);
	free(buf);
	return (0);
}
