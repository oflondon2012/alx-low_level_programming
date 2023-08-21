#include "main.h"

/**
 * rev_string - function to reverse the string
 * @s: given string input
 *
 * Return: string in reverse state
 */

void rev_string(char *s)
{
	char revs = s[0];
	int count = 0;
	int j;

	while (s[count] != '\0')
	{
		count++;
	}
	for (j = 0; j < count; j++)
	{
		count--;
		revs = s[j];
		s[j] = s[count];
		s[count] = revs;
	}
}
