#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: the number of times the line should be draw
 *
 * Return: void
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
