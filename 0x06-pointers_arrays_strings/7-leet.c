#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @j: take in value
 *
 * Return: value of j
 */

char *leet(char *j)
{
	int i, k;
	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (i = 0; j[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (j[i] == ch1[k])
			{
				j[i] = ch2[k];
			}
		}
	}
	return (j);
}
