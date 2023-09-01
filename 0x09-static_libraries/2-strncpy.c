#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination varible to copy into
 * @src: source varible to copy from
 * @n: input variable for comparison
 *
 * Return: destination value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
