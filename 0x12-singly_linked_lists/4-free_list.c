#include "lists.h"

/**
 * free_list - function that free the list
 * @head: the first node in the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *cu_node;

	while (head != NULL)
	{
		cu_node = head;
		head = head->next;
		free(cu_node->str);
		free(cu_node);
	}
}
