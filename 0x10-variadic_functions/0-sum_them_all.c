#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of arg to compute
 *
 * Return: 0 if n is NULL or return the compute sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	unsigned int j;

	va_list sumlist;

	va_start(sumlist, n);

	for (j = 0; j < n; j++)
	{
		add = add + va_arg(sumlist, int);
	}
	va_end(sumlist);
	return (add);
}
