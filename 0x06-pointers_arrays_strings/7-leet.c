#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @j: take in value
 *
 * Return: value of j
 */

char *leet(char *j)
{
	int i = 0, k = 0;
	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	while (j[i] != '\0')
	{
		while (k < 10)
		{
			if (j[i] == ch1[k])
			{
				j[i] = ch2[k];
			}
			k++;
		}
		j++;
	}
	return (j);
}
