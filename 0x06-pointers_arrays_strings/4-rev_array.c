#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reverse
 * @n: number of element in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
