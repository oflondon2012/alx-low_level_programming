#include "main.h"

/**
 * _puts - function that print a string to standard out
 * @str: variable to hold string to print out
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
