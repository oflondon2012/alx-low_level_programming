#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 *
 * @array: pointer to the main array
 * @size: size of an array
 * @action: pointer to array function
 *
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL && action != NULL)
	{
		for (j = 0; j < size; j++)
		{
			(*action)(array[j]);
		}
	}
}
