#include "lists.h"
/**
 * print_dlistint - function that print doubly linked lists
 * @h: the head of the list
 *
 * Return: the number of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
