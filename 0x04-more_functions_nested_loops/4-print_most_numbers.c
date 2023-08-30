#include "main.h"

/**
 * print_most_numbers - function that print number from 0 to 9 
 * apart from 2 and 4
 *
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
