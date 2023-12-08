#include "lists.h"

/**
 * add_dnodeint_end - function that add node at the end of a list
 * @head: head of the list
 * @n: list to be added
 *
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	h = *head;
	while (h->next != NULL)
		h = h->next;

	h->next = new_node;
	new_node->prev = h;

	return (new_node);
}
