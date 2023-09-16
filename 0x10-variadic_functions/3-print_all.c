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
	int j = 0, spchk;

	va_list pall;

	va_start(pall, format);

		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%c", va_arg(pall, int));
					spchk = 0;
					break;
				case 'i':
					printf("%d", va_arg(pall, int));
					spchk = 0;
					break;
				case 'f':
					printf("%f", va_arg(pall, double));
					spchk = 0;
					break;
				case 's':
					stg = va_arg(pall, char *);
					if (stg == NULL)
						stg = "(nil)";
					printf("%s", stg);
					break;
				default:
					spchk = 1;
					break;
			}
			if (format[j + 1] != '\0' && spchk == 0)
				printf(", ");
			j++;
		}
	printf("\n");
	va_end(pall);
}
