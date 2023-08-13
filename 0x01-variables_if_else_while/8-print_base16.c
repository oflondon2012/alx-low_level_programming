#include <stdio.h>
/**
 * main - Program to print hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
