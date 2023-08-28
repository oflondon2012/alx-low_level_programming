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
	int j;

	for (j = 0; j >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	return (0);
}
