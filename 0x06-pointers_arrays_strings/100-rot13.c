#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @j: variable pointer to string parameter
 *
 * Rturn: the value of j
 */

char *rot13(char *j)
{
	int i, k;
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; j[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (j[i] == ch1[k])
			{
				j[i] = ch2[k];
				break;
			}
		}
	}
	return (j);
}