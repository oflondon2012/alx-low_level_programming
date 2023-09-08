#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements from s2 to concatenate
 *
 * Return: a pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, m;
	char *pt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		;
	}
	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		;
	}
	pt = (char *)malloc((j + k + 1) * sizeof(char));
	if (pt == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < j; m++)
	{
		pt[m] = s1[m];
	}
	for (m = 0; m < k; m++)
	{
		pt[m + j] = s2[m];
	}
	pt[j + k] = '\0';
	return (pt);
}
