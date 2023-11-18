#include "main.h"

/**
 * _join_paths - Concatenates two strings, adding a path separator in between.
 * @path1: First part of the path.
 * @path2: Second part of the path.
 * Return: A dynamically allocated string containing the concatenated path.
 */
char *_join_paths(const char *path1, const char *path2)
{
	size_t len1 = strlen(path1);
	size_t len2 = strlen(path2);
	char *result = malloc(len1 + len2 + 2);

	if (result)
	{
		strcpy(result, path1);
		result[len1] = '/';
		strcpy(result + len1 + 1, path2);
	}

	return (result);
}

/**
 * _getpath - Get the full path of a command.
 * @token: The command to search for.
 * Return: A dynamically allocated string containing the full path or NULL.
 */
char *_getpath(const char *token)
{
	const char *path = getenv("PATH");
	char *path_copy, *file_path;
	const char *path_token;
	struct stat buffer;

	if (!path)
		return (NULL);
	path_copy = strdup(path);
	if (!path_copy)
	{
		perror("_getpath: strdup failed");
		return (NULL);
	}

	path_token = strtok(path_copy, ":");
	while (path_token != NULL)
	{
		file_path = _join_paths(path_token, token);
		if (!file_path)
		{
			perror("_getpath: _join_paths failed");
			free(path_copy);
			return (NULL);
		}

		if (stat(file_path, &buffer) == 0)
		{
			free(path_copy);
			return (file_path);
		}

		free(file_path);
		path_token = strtok(NULL, ":");
	}
	free(path_copy);
	if (stat(token, &buffer) == 0)
		return (strdup(token));
	return (NULL);
}
