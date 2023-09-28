#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete node at any index
 * @head: pointer to first node on list
 * @: index: index to delete
 *
 * Return: 1 if it succeded -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rem = *head, *cur = NULL;
	unsigned int j;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(rem);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		if (!rem || !(rem->next))
			return (-1);
		rem = rem->next;
	}
	cur = rem->next;
	rem->next = cur->next;
	free(cur);
	return (1);
}
