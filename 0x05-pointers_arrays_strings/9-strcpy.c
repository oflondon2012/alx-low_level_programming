#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: destination to copy from
 * @src: where to copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0, k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
