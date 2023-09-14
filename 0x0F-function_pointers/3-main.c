#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perform arithmetic operation
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: calculation of result
 */

int main(int argc, char *argv[])
{
	int numb1, numb2;
	char *operat;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);
	operat = argv[2];
	if (operat[1] != '\0' || get_op_func(operat) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operat == '/' && numb2 == 0) || (*operat == '%' && numb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operat)(numb1, numb2));
	return (0);
}
