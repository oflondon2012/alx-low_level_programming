#include "main.h"

/**
 * jack_bauer - funtion that print minute of the day jack bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, a, b, ai, bi;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			a = i / 10;
			ai = i % 10;
			b = j / 10;
			bi = j % 10;
			_putchar(a + '0');
			_putchar(ai + '0');
			_putchar(58);
			_putchar(b + '0');
			_putchar(bi + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
