#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: first string variable
 * @s2: second string variable
 *
 * Return: pointer that point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *cptr;
	size_t j = 0, k = 0;
	size_t i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[j] != '\0')
		j++;
	if (s2 == NULL)
		s2 = "";
	while (s2[k] != '\0')
	{
		k++;
	}
	cptr = (char *)malloc((j + k + 1) * sizeof(char));
	if (cptr == NULL)
	{
		
		return (NULL);
	}
	while (i < j)
	{
		cptr[i] = s1[i];
		i++;
	}
	while (l < k)
	{
		cptr[i] = s2[l];
		l++;
	}
	return (cptr);
}




