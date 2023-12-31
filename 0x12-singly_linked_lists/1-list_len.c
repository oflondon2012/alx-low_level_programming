#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a list
 * @h: Pointer to the first noce
 *
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int numb;

	if (h == NULL)
		return (0);
	for (numb = 1; h->next != NULL; numb++)
		h = h->next;
	return (numb);
}
