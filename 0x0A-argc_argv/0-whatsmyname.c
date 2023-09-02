#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of command line arg
 * @argv: array containing the comand line
 *
 * Return: Always 0 (success)
 */

int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
