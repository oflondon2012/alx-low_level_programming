#include <stdio.h>
/**
 * main - Program that print combination of 3 digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k, l;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			for (l = k + 1; l < 10; l++)
			{
				if (l > k && k > j)
				{
					putchar('0' + j);
					putchar('0' + k);
					putchar('0' + l);
					if (j != 7 || k != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
