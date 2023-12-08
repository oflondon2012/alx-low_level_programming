#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth node of list
 * @head: head of the list
 * @index: index of the node to search for
 *
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur_node;
	unsigned int cur_index = 0;

	if (head == NULL)
		return (NULL);

	cur_node = head;
	while (cur_node != NULL)
	{
		if (cur_index == index)
			return (cur_node);

		cur_node = cur_node->next;
		cur_index = cur_index + 1;
	}

	return (NULL);
}
