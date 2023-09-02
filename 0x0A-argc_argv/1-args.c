#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: number of command line
 * @argv: array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
