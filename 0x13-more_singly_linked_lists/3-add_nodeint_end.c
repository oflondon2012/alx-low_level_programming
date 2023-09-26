#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: pointer to the first element in a list
 * @n: element to ad to the list
 *
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
