#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print all the element of a list
 * @h: pointer to the start of the list
 *
 * Return: number of node in list
 */

size_t print_listint(const listint_t *h)
{
	size_t sumlist = 0;

	for (; h != NULL; h = h->next)
	{
		sumlist = sumlist + 1;
		printf("%d\n", h->n);
	}
	return (sumlist);
}
