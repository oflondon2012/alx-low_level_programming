#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination value
 * @src: source variable
 *
 * Return: destination value
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, k = 0;

	while (dest[j] != '\0')
		j++;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
