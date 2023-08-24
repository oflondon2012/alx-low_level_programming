#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to upper
 * @j: variable that serves as pointer
 *
 * Return: the upersace of given letters
 */

char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
