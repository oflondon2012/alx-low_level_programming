#include "shell.h"

/**
 * customGetline - function that read character from standard input
 * @linep: character to be input
 * @lenn: lenght of the character input
 * @stream: standard stream
 *
 * Return: the character to standard in
 */

ssize_t customGetline(char **linep, size_t *lenn, FILE *stream)
{
	ssize_t capa = 1024;
	ssize_t bytes = 0;
	char tem;
	int j;


	if (linep == NULL || lenn == NULL)
		return (-1);
	*linep = (char *)malloc(capa);
	if (!*linep)
	{
		perror("Memory allocation error");
		return (-1);
	}
	if (j == EOF && bytes == 0)
	{
		free(*linep);
		*linep = NULL;
		return (-1);
	}
	while ((j = fgetc(stream)) != EOF && j != '\n')
	{
		(*linep)[byte++ = (char)j;
		if (bytes == capa)
		{
			capa = capa * 2;
			tem = realloc(*linep, capa);
			if (!tem)
			{
				perror("Memory reallocation error");
				free(lineptr);
				return (-1);
			}
			*linep = tem;
		}
	}
	(*linep)[bytes] = '\0';
	*lenn = bytes;
	return (bytes);
}
