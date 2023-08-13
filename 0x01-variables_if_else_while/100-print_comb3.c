#include <stdio.h>
/**
 * main - Program that print combination of 2 digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			if (k > j)
			{
				putchar('0' + j);
				putchar('0' + k);
				if (j != 8 || k != 9)
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
