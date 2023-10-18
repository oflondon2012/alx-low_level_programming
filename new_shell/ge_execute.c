#include "shell.h"

/**
 * ge_execute - function to execute
 * @strg: string to execute
 *
 */
void ge_execute(char **strg)
{
	pid_t child_pid;
	int status;

	if (!strg || !strg[0])
		return;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror(ge_getenv("-"));
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		execve(strg[0], strg, environ);
		perror(strg[0]);
		exit(EXIT_FAILURE);
	}
	wait(&status);
}

/**
 * ge_splitString - function to split string and make it an array
 * @strg: string to split
 * @delim: the delimiter to use
 *
 * Return: array of pointer
 */
char **ge_splitString(char *strg, const char *delim)
{
	size_t wn = 0;
	char *token, *copy, **array = NULL;

	if (strg == NULL || delim == NULL)
		return (NULL);
	copy = ge_strdup(strg);
	if (copy == NULL)
	{
		perror(ge_getenv("-"));
		return (NULL);
	}
	token = strtok(copy, delim);
	while (token)
	{
		array = re_realloc(array, sizeof(char *) * (wn + 1));
		if (array == NULL)
		{
			perror(ge_getenv("-"));
			free(copy);
			return (NULL);
		}
		array[wn] = ge_strdup(token);
		if (array[wn] == NULL)
		{
			perror(ge_getenv("-"));
			free(copy);
			return (NULL);
		}
		wn++;
		token = strtok(NULL, delim);
	}
	free(copy);
	return (array);
}
/**
 * ge_freestrg - function that free array of pointer
 * @strg: array of pointer
 *
 * Return: void
 */
void ge_freestrg(char **strg)
{
	int i = 0;

	if (strg == NULL)
	{
		return;
	}
	while (strg[i] != NULL)
	{
		free(strg[i]);
		i++;
	}
	free(strg);
}

/**
 * ge_realloc - function to reallocate memory
 * @strgptr: pointer to previous memory
 * @oldsize: size of old pointer
 * @newsize: size of new pointer
 *
 * Return: new size pointer
 */
void *ge_realloc(void *strgptr, unsigned int oldsize, unsigned int newsize)
{
	char *oldptr, newptr;
	unsigned int i;

	if (newsize == 0 && strgptr != NULL)
	{
		free(strgptr);
		return (NULL);
	}
	if (strgptr == NULL)
		return (malloc(newsize));
	if (newsize == oldsize)
		return (strgptr);
	newptr = malloc(newsize);
	if (newptr == NULL)
	{
		free(strgptr);
		return (NULL);
	}
	oldsize = strgptr;
	if (newsize > oldsize)
	{
		for (i = 0; i < oldsize; i++)
			newptr[i] = oldptr[i];
		for (i = oldsize; i < newsize; i++)
			newptr[i] = '\0';
	}
	else
	{
		for (i = 0; i < newsize; i++)
			newptr[i] = oldptr[i];
	}
	free(strgptr);
	return (newptr);
}
