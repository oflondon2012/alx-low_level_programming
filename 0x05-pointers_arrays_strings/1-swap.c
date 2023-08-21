#include "main.h"

/**
 * swap_int - function that swap the value of two giving integers
 * @a: first integer value
 * @b: second integer value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
