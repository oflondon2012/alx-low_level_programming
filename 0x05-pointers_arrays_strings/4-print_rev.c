#include "main.h"

/**
 * print_rev - function that print the reverse of the string
 * @s: string variable to print the reverse
 *
 * Return: always 0;
 */

void print_rev(char *s)
{
	int revs = 0;
	int j;

	while (*s != '\0')
	{
		revs++;
		s++;
	}
	s--;
	for (j = revs; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
