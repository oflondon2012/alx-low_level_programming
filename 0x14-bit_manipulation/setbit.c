#include "main.h"

/**
 * set_bit - funtion that sets the value of a bit to 1 at a given index
 * @n: pointer to number to compute
 * @index: where to set bit
 *
 * Return: 1 on success or -1 if failled
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sbit = 1;

	if (index > sizeof(unsigned int) * 8 - 1)
		return (-1);
	sbit = sbit << index;
	*n = (*n) | sbit;
	return (1);
}
