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
			putchar('0' + j);
			putchar('0' + k);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
