#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds possitive numbers
 * @argc: number of command line
 * @argv: array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int j, k, sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum = sum + atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
