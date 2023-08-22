#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for 101-crackme
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int pass[64], j = 0, nsum = 0, num;

	srand(time(NULL));
	while (j < 64)
	{
		pass[j] = rand() % 78;
		nsum += pass[j] + '0';
		putchar(pass[j] + '0');
		if((2772 - nsum - '0') < 78)
		{
			num = 2772 - nsum - '0';
			nsum += num;
			putchar(num + '0');
			break;
		}
		j++;
	}
	return (0);
}
