#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: integer value of the converted string
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, l = 0, dlent, intval;

	dlent = 0;
	intval  = 0;

	while (s[dlent] != '\0')
		dlent++;
	while (i < dlent && j == 0)
	{
		if (s[i] == '-')
			++l;
		if (s[i] >= '0' && s[i] <= '9')
		{
			intval = s[i] - '0';
			if (l % 2)
				intval = -intval;
			k = k * 10 + intval;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);
	return (k);
}
