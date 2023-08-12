#include <stdio.h>
/**
 * main - Program that print alphabeth upper and lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	int k;

	for (j = 0; j < 26; j++)
	{
		putchar('a' + j);
	}

	for (k = 0; k < 26; k++)
	{
		putchar('A' + k);
	}
	putchar('\n');
	return (0);
}
