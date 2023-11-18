#include "shell.h"

/**
 * r_command - function to read in to std in
 * @strg: string to read in
 * @lenn: size of the string
 *
 * Return: void
 */
void r_command(char *strg, size_t lenn)
{
	if (fgets(strg, lenn, stdin) == NULL)
	{
		if (feof(stdin))
		{
			g_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			g_printf("Error reading your input.\n");
			exit(EXIT_FAILURE);
		}
	}
	strg[strcspn(strg, "\n")] = '\0';
}
