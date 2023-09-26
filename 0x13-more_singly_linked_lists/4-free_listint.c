#include "lists.h"

/**
 * free_listint - function that free a list
 * @head: first element in the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *emp;

	for (; head != NULL;)
	{
		emp = head;
		head = head->next;
		free(emp);
	}
}
