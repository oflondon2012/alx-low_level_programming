#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: variable number to check
 *
 * Return: Absolute value of number given
 */

int _abs(int n)
{
	if (n < 0)
	{
		int ab_val;

		ab_val = n * -1;
		return (ab_val);
	}
	else
	{
		return (n);
	}
}
