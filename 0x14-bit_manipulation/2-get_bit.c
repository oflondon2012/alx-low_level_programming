#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given index
 * @n: number of check
 * @index: index of the bit
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	while (j < index)
	{
		n = n >> 1;
		j++;
	}
	return (n & 1);
}
