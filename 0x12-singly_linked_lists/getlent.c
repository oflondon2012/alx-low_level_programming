#include "lists.h"
/**
 * len - get the lenght of the given string
 * @str: string to get the lenght
 * Return: lenght of the string
 */
int len(const char *str)
{
	int num = 0;

	if (str == NULL)
		return (0);
	while (str[num] != '\0')
		num++;
}
