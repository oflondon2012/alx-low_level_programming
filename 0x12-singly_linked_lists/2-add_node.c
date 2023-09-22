#include "lists.h"
int len(const char *str);

/**
 * add_node - function that adds newnode at the beginning
 * @head: start of the list
 * @str: string to add to list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int lent = 0;

	list_t *toadd;

	toadd = malloc(sizeof(list_t));
	if (toadd == NULL)
		return (NULL);
	while (str[lent])
		lent++;
	toadd->len = lent;
	toadd->str = strdup(str);
	toadd->next = *head;
	*head = toadd;
	return (toadd);
}

/**
 * len - get the lenght of the given string
 * @str: string to get the lenght
 *
 * Return: lenght of the string
 */
int len(const char *str)
{
	int num = 0;

	if (str == NULL)
		return (0);
	while (str[num] != '\0')
		num++;
	return (num);
}
