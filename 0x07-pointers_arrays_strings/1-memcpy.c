#include "main.h"

/**
 * _memcpy -  function that copies memory area
 *  @dest: destination to copy to
 *  @src: source to copy from
 *  @n: number of bytes
 *
 *  Return: the copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0, k = n;

	while (j < k)
	{
		dest[j] = src[j];
		n--;
		j++;
	}
	return (dest);
}
