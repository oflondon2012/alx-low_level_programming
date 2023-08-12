#include <stdio.h>
/**
 * main - program that prit from 0 to 9 without using printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
