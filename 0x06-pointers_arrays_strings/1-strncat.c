#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination value
 * @src: source variable
 * @n: number of byte the source will use
 *
 * Return: destination value
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	while (dest[j] != '\0')
		j++;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
