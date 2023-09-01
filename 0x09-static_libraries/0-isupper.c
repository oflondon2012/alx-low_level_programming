#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @j: caracter to check
 *
 * Return: 0 or 1
 */

int _isupper(int j)
{
	if (j >= 'A' && j <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
