#include "main.h"

/**
 * print_last_digit - function that print last digit of a given number
 *
 * @n: given number to get the last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');

	return (m);
}
