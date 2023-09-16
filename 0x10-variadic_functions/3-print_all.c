#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of augument type
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *stg;
	int j = 0;
	char *sepa = " ";

	va_list pall;

	va_start(pall, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(pall, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(pall, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(pall, double));
					break;
				case 's':
					stg = va_arg(pall, char *);
					if (stg == NULL)
						stg = "(nil)";
					printf("%s%s", sepa, stg);
					break;
				default:
					j++;
					continue;
			}
			sepa = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(pall);
}
