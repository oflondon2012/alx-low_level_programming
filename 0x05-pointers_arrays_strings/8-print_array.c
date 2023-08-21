#include "main.h"

/**
 * print_array - funtion that print element of an array
 * @a: given array name
 * @n: number of elements of the array
 *
 * Return: return 2 value a and n
 */

void print_array(int *a, int n)
{
	int j, k;

	k = n - 1;
	for (j = 0; j < k; j++)
	{
		printf("%d, ", a[j]);
	}
	if  (j == k)
	{
		printf("%d", a[k]);
	}
	printf("\n");
}
