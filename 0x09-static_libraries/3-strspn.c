#include "main.h"

/**
 * _strspn - function that get the lenght of a prefix substring
 * @s: variable input
 * @accept: input variable
 *
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int k;

	for  (; *s; s++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (j);
			}
		}
	}
	return (0);
}
