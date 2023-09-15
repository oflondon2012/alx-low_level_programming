#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the funct
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list printlist;

	va_start(printlist, n);

	for (j = 0; j < n; j++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(printlist, int));
		}
		else if (separator && j == 0)
			printf("%d", va_arg(printlist, int));
		else
			printf("%s%d", separator, va_arg(printlist, int));
	}
	va_end(printlist);
	printf("\n");
}
