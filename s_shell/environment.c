#include "shell.h"

/**
 * printEnvi - function that print the current env variables
 * $strg: argument 
 *
 * Retuen: Always (0)
 */

int printEnvi(info_t *strg)
{
	g_printStrings(strg->environment);
	return (0);
}

/**
 * _getEnvi - function that get the environment variable
 * @strg: argument
 * @name: name of the environment
 *
 * Return: value of environment variable or NULL if not found
 */

char *_getEnvi(info_t *strg, const char *name)
{
	char *valu;
	list_t *nod = info->environment;

	while (nod)
	{
		valu = startsWith(nod->str, name);
		if (valu && valu)
			return (valu);
		nod = nod->next;
	}
	return (NULL);
}

/**
 * setEnvi - function that initiate environment variable
