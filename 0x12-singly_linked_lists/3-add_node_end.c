#include "lists.h"
/**
 * add_node_end - function that add to the end of the list
 * @head: head of the list
 * @str: string to add to the lisk
 *
 * Return: Address of the new element or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t num;
	list_t *cu_node, *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(str);
	for (num = 0; str[num]; num++)
		;
	add_node->len = num;
	add_node->next = NULL;
	cu_node = *head;
	if (cu_node == NULL)
		*head = add_node;
	else
	{
		while (cu_node->next != NULL)
			cu_node = cu_node->next;
		cu_node->next = add_node;
	}
	return (*head);
}
