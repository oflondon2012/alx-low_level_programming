#include "main.h"
#include <stdio.h>

/**
 * _memset - Function that fills memory with a costand byte.
 * @s: pointer to the address to fill
 * @b: the value
 * @n: the number of bytes to change the value
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
