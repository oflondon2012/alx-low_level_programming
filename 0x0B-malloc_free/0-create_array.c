#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: size of array input
 * @c: variable that store the string of char..
 *
 * Return: Always return pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned char j;
	char *pointt;

	if (size == 0)
		return (NULL);
	pointt = (char *)malloc(size * sizeof(char));
	if (pointt == 0)
		return (NULL);
	for (j = 1; j <= size; j++)
	{
		pointt[j] = c;
	}
	return (pointt);
}
