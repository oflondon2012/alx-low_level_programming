#include "function_pointers.h"

/**
 * int_index - function that search fo an integer
 *
 * @array: pointer to an integer array
 * @size: size of the array element
 * cmp: pointer to the function use to compare value
 *
 * Return: -1 if size <= 0 and if not element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
	}
	return (-1);
}
