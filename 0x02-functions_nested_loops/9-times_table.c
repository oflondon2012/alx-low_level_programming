#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int n, m, l, p, q;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			l = n * m;
			if (l > 9)
			{
				p = l % 10;
				q = (l - p) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(q + '0');
				_putchar(p  + '0');
			}
			else 
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(l + '0');
			}
		}
		_putchar('\n');
	}
}

