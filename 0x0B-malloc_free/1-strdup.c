#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: input string
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *sptr;
	size_t j = 0, k = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		j++;
	}
	sptr = (char *) malloc(sizeof(char) * (j + 1));
	if (sptr == NULL)
		return (NULL);
	while (k <= j)
	{
		sptr[k] = str[k];
		k++;
	}
	return (sptr);
}
