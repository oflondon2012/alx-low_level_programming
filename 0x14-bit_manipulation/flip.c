#include "main.h"

/**
 * flip_bits - function that return num of bits flip to get one num to another
 * @n: first int number
 * @m: second int number
 *
 * Return: int number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_ans = n ^ m;
	unsigned int sum = 0;

	while (xor_ans > 0)
	{
		sum += xor_ans & 1;
		xor_ans >>= 1;
	}
	return (sum);
}
