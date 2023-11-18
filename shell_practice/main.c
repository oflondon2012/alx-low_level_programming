#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(ShellE) $ ";
	char *lineptr;
	size_t j = 0;
	ssize_t nchar;

	(void)ac; (void)argv;

	while (1)
	{
		printf("%s", prompt);
		nchar = getline (&lineptr, &j, stdin);
		if (nchar == -1)
		{
			printf("Existing shell ...\n");
			return (-1);
		}
		printf("%s\n", lineptr);
	}
	free(lineptr);
	return (0);
}
