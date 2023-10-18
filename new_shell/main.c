#include "shell.h"

/**
 * ge_print_prompt - function used to verify the terminal
 *
 * Return: void
 */
void ge_term(void)
{
	if (isatty(STDIN_FILENO))
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
	char *pathname, *buf = NULL, *value, **arv;
	void (*ge)(char **);

	signal(SIGINT, ge_signal_c);
	while (lenn != -1)
	{
		ge_term();
		lenn = getline(&buf, &size, stdin);
		ge_handleEOF(lenn, buf);
		arv = ge_splitString(buf, " \n");
		if (!arv || !arv[0])
			ge_execute(arv);
		else
		{
			value = ge_getenviron("PATH");
			head = ge_lnpath(value);
			pathname = ge_pathname(arv[0], head);
			ge = ge_buildin_check(arv);
			if (ge)
			{
				free(buf);
				ge(arv);
			}
			else if (!pathname)
				ge_execute(arv);
			else if (pathname)
			{
				free(arv[0]);
				arv[0] = pathname;
				ge_execute(arv);
			}
		}
	}
	ge_freelist(head);
	ge_freestrg(arv);
	free(buf);
	return (0);
}
