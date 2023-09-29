#include "main.h"

/**
 * binary_to_uint - function that convert a binary to integer
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted num or 0 if b is NULL && b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int j = 0, i;
	unsigned int add = 0, ba = 1;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
		j++;
	if (j == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			add += ba;
		ba <<= 1;
	}
	return (add);
}
