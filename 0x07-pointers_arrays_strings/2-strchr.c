#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: character in the string
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (j >= '\0')
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
	return (0);
}
