#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first char to compare
 * @s2: the second char to compare
 *
 * Return: 0 if the same else first value minus second value
 */

int _strcmp(char *s1, char *s2)
{
	int cha3;
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			cha3 = s1[j] - s2[j];
			return (cha3);
		}
	}
	return (0);
}
