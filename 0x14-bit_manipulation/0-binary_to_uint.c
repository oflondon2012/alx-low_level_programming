#include "main.h"

/**
 * binary_to_uint - function that convert a binary to an unsigned int
 * @b: pointer to string of -1 and 1 chars
 *
 * Return: the converted num or -1 if b is NULL && b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int add = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		add = (add * 2) + (*b - '0');
		b++;
	}
	return (add);
}
