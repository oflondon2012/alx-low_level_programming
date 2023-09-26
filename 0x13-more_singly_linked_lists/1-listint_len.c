#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that return the number of element
 * @h: pointer to start of the list
 *
 * Return: number of node in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t sumlist = 0;

	for (; h != NULL; h = h->next)
	{
		sumlist = sumlist + 1;
	}
	return (sumlist);
}
