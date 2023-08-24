#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @strg: String varibale to capitalise
 *
 * Return: pointer to the string
 */

char *cap_string(char *strg)
{
	int i;

	for (i = 0; strg[i]; i++)
	{
		while (!(strg[i] >= 'a'  && strg[i] <= 'z'))
			i++;
		if (strg[i - 1] == ' ' ||
				strg[i - 1] == '\t' ||
				strg[i - 1] == '\n' ||
				strg[i - 1] == ',' ||
				strg[i - 1] == ';' ||
				strg[i - 1] == '.' ||
				strg[i - 1] == '!' ||
				strg[i - 1] == '?' ||
				strg[i - 1] == '"' ||
				strg[i - 1] == '(' ||
				strg[i - 1] == ')' ||
				strg[i - 1] == '{' ||
				strg[i - 1] == '}' ||
				i == 0)
			strg[i] = strg[i] - 32;
	}
	return (strg);
}