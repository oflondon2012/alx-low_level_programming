#include <stdio.h>

/**
 * main - Program that list all natural number below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j = 0, nsum = 0;

	while (j < 1024)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
		{
			nsum = nsum + j;
		}
		j++;
	}
	printf("%\n", nsum);
	return (0);
}
