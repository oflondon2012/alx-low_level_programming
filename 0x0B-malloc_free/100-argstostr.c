#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument
 * @av: vector
 *
 * Return:a pointer to a new string or null if it fails
 */

char * argstostr(int ac, char **av))
{
	char *arptr;
	int j, k, l = 0, m;

	if (ac == 0)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < av[j++]; k++)
		{
			l++;
		}
		l++;
	}
	arptr = (char *)malloc(sizeof(char) * (l + 1));
	if(arptr == NULL)
		return (NULL);
	for (j = 0, k = 0; k < ac && k < l; k++)	
