#include "main.h"

/**
 * puts2 - function that print every otther character of a string
 * @str: input variable that test the code
 *
 * Return: the printer character of input value
 */

void puts2(char *str)
{
	int chats = 0;
	char *m = str;
	int i;

	while (*m != '\0')
	{
		chats++;
		m++;
	}
	chats--;
	for (i = 0; i <= chats; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
