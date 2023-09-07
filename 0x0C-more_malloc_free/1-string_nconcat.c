#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of element
 *
 * Return: a point to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, l;
	char *pt;

	if (s1 == NULL || s2 == NULL)
	{
		j = 0;
		k = 0;
	}
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			;
		}
		for (k = 0; s2[k] != '\0'; k++)
		{
			;
		}
	}
	if (k > n)
		k = n;
	pt = (char *)malloc((j + k + 1) * sizeof(char));
	if (pt == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
	{
		pt[l] = s1[l];
	}
	for (l = 0; l < k; l++)
	{
		pt[l + j] = s2[l];
	}
	pt[j + k] = '\0';
	return (pt);
}
