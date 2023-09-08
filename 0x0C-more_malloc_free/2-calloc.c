#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *  @nmemb: number of block in memory
 *  @size: size of the pointer
 *
 *  Return: return void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t j;
	char *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
	return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (j < (nmemb * size))
	{
		ptr[j] = 0;
		j++;
	}
	return (ptr);
}
