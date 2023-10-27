#include "main.h"

/**
 * clear_bit - function that set a bit to 0 at a given index
 * @n: pointer to the compute number
 * @index: index to where to set the bit
 *
 * Return: 1 on success or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sbit = 1;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	sbit = sbit << index;
	if ((*n & sbit) != 0)
		*n = *n ^ sbit;
	return (1);
}
