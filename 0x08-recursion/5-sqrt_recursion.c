#include "main.h"

/**
 * sqrt_op - function that perform sqaure root operation
 * @j: input variable
 * @k: value to perform iteration
 *
 * Return: -1 or qure root of the number
 */

int sqrt_op(int j, int k)
{
	if (k * k > j)
	{
		return (-1);
	}
	else if (k * k == j)
	{
		return (j);
	}
	return (sqrt_op(j, k + 1));
}

/**
 * _sqrt_recursion - functiont return the natural square root of a number
 * @n: variable to get if its natural square root
 *
 * Return:square root of the number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_op(n, 0));
}
