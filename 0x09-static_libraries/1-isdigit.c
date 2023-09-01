#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: the varible name to compute
 *
 * Return: 1 if successful else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
