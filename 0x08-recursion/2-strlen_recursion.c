#include "main.h"

/**
 * _strlen_recursion - function that return the lenght of the given string
 * @s: String the compute the lenght
 *
 * Return: Always return the lenght of the given string
 */

int _strlen_recursion(char *s)
{
	int lengt = 0;

	if (*s)
	{
		lengt++;
		lengt = lengt + _strlen_recursion(s + 1);
	}
	return (lengt);
}
