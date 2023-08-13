#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
