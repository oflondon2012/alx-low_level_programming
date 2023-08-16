#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 *@c: Character to compare to input
 * Return: Always 1 for lowercasw 0 for any other thing(s)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
