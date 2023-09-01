#include "main.h"

/**
 * _strstr - function that locate s subtring
 * @haystack: input variable
 * @needle: input variable
 *
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
