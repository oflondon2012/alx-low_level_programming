#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: variable name of the string the get the length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
