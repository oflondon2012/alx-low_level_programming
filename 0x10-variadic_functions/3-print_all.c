#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of augument type
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *stg;
	int j;
	char *separator;

	va_list printall;

	va_start(printall, format);

	if (format)
	{
		separator = "";
		j = 0;
		while (format[j])
		{
			switch (format[j])
			{
				case 'i':
					printf("%s%d", separator, va_arg(printall, int));
				break;
				case 'c':
					printf("%s%c", separator, va_arg(printall, int));
				break;
				case 'f':
					printf("%s%f", separator, va_arg(printall, double));
				break;
				case 's':
					stg = va_arg(printall, char *);
					if (stg == NULL)
						stg = "nil";
					printf("%s%s", separator, stg);
				break;
				default:
					j++;
					continue;
			}
			separator = ",";
			j++;
		}
	}
	printf("\n");
	va_end(printall);
}
