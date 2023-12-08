#include "lists.h"
/**
 * dlistint_len - function that count the number of elements in list
 * @h: head of the list
 *
 * Return: The number of element(s)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
