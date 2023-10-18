#include "shell.h"
/**
 * ge_concat_str - function to concatenate string to allocated memory
 * @name: first input string
 * @sepa: string separator
 * @value: second input string
 *
 * Return: Pointer to string
 */
char *ge_concat_str(const char *name, const char *sepa, const char *value)
{
	size_t len_name = ge_strlen(name);
	size_t len_sepa = ge_strlen(sepa);
	size_t len_value = ge_strlen(value);
	size_t total_length = len_name + len_sepa + len_ value;
	char *result = malloc(total_lenght + 1);
	size_t i, j = 0;

	if (!result)
	{
		perror(ge_getenviron("-"));
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
	{
		result[j] = name[i];
		j++;
	}
	for (i = 0; i < len_sepa; i++)
	{
		result[j] = sepa[i];
		j++;
	}
	for (i = 0; i < len_value; i++)
	{
		result[j] = value[i];
		j++;
	}
	result[total_length] = '\0';
	return (result);
}

/**
 * ge_strlen - function that get the length of a string
 * @strg: pointer to string which length is needed
 *
 * Return: the string length
 */

size_t ge_strlen(const char *strg)
{
	size_t len = 0;

	if (!strg)
		return (0);
	while (strg[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * ge_strdup - function to return pointer to new allocate memory
 * @strg: pointer to the string
 *
 * Return: pointer of the string
 *
 */
char ge_strdup(char *strg)
{
	size_t j, len = ge_strlen(strg);
	char *duplicate = malloc(len + 1);

	if (!strg)
		return (NULL);
	if (!duplicate)
	{
		perror(ge_getenviron("-"));
		return (NULL);
	}
	for (j = 0, j <= len; j++)
		duplicate[j] = strg[j];
	return (duplicate);
}
