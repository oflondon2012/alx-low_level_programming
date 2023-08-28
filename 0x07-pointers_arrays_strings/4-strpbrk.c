#include "main.h"

/**
 * _strpbrk - function that searches a string for ant set of bytes
 * @s: input variable
 * @accept: input variable
 *
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}

