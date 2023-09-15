#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *stg;
	unsigned int j = 0;

	va_list printlist;

	va_start(printlist, n);

	while (j < n)
	{
		stg = va_arg(printlist, char *);
		if (stg == NULL)
			stg = "nil";
		if (separator == NULL)
			printf("%s", stg);
		else if (separator && j == 0)
			printf("%s", stg);
		else
			printf("%s%s", separator, stg);
		j++;
	}
	printf("\n");
	va_end(printlist);
}
