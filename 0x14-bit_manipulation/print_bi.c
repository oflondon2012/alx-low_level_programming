#include "main.h"

/**
 * po_wer - function that calculate the power of given number
 * @b: this is the base of the func
 * @p: power of the func
 *
 * Return: power of given number
 */
unsigned long int po_wer(unsigned int b, unsigned int p)
{
	unsigned int i = 1;
	unsigned long int number = 1;

	while (i <= p)
	{
		number = number * b;
		i++;
	}
	return (number);
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number of binary rep to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	char hac = 0;
	unsigned long int ch, div;

	div = po_wer(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (ch == div)
		{
			hac = 1;
			_putchar('1');
		}
		else if (hac == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
