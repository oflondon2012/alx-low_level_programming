#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that print each character to standerd out
 * @c: character to print to std out
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
