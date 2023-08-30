#include "main.h"

/**
 * factorial - function that return the factorial of given number
 * @n: the input variable to hold the number which factorial is comput
 *
 * Return: the factorial of given number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
