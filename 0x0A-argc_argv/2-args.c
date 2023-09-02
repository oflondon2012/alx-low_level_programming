#include <stdio.h>

/**
 * main - program that prints all argument it receives
 * @argc: number ofcommand line arg
 * @argv: array
 *
 * Return: Aways 0 (success)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
