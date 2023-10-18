#include "shell.h"

/**
 * ge_myputchar - function that write the character to standard out
 * @strg: represent the string to print out
 *
 * Return: Always 1 on success
 */

int ge_myputchar(char strg)
{
	return (write(1, &strg, 1));
}

/**
 * ge_puts - using puts function to print out
 * @strg: string to print out
 *
 * Return: void:
 */
void ge_puts(char strg)
{
	int j;

	for (j = 0, strg[j], j++)
	{
		ge_myputchar(strg[j]);
	}
}

