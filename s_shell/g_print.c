#include "shell.h"

/**
 * g_printf - function that print to std out
 * @strg: the string to print out
 * 
 * Return: void
 */

void g_printf(const char *strg)
{
	write(STDOUT_FILENO, strg, strlen(strg));
}
