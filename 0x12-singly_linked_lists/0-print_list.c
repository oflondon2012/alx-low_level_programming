#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the first node in the list
 *
 * Return: the number of node on the list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		num++;
	}
	return (num);
}
