#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node at given position
 * @head: pointer to first element in a list
 * @idx: index of the list where new node is added
 * @n: element to add to the list
 *
 * Return: the address of the new node or Null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *add = *head;
	unsigned int j = 0;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (add && j < idx)
	{
		if (j == idx - 1)
		{
			node->next = add->next;
			add->next = node;
			return (node);
		}
		else
			add = add->next;
		j++;
	}
	return (NULL);
}
