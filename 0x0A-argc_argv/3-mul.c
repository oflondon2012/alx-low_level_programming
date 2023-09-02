#include "main.h"

/**
 * main - program that multiply two numbers in argument
 * @argc: number of command line argument
 * @argv: array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
