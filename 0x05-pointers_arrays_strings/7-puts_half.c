#include "main.h"

/**
 * puts_half - function that print half of a given string
 * @str: inputed string variable
 *
 * Return: half of the given string
 */

void puts_half(char *str)
{
	int j, k, m, strhalf = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		strhalf++;
	}
	k = strhalf / 2;
	m = strhalf % 2;
	if (m == 1)
	{
		k = (strhalf + 1) / 2;
	}
	for (j = k; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
