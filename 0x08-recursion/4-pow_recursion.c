#include "main.h"

/**
 * _pow_recursion - function that returns the value of 2 given integer
 * @x: first given integer to get the power
 * @y: second integer which represent the power
 *
 * Return: -1 if y is < 0 else always 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
