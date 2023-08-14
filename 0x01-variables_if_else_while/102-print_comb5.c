#include <stdio.h>
/**
 * main - program that prints possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 100; j++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k > j)
			{
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				putchar(' ');
				putchar('0' + (k / 10));
				putchar('0' + (k % 10));
				if (j != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
