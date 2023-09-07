#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer input
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
