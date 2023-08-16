#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			l = n * m;
			if (n == 0)
			{
				_putchar(l + '0');
			}
			if ((l < 10) && (n != 0))
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(l + '0');
			}
			else if (l >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

