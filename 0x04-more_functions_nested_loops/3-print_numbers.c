#include "main.h"

/**
 * print_numbers - function that print the numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
