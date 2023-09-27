#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a lost
 * @head: pointer to head of list
 * @index: node to return
 *
 * Return: pointer to a node of nth or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *emp = head;
	unsigned int j;

	for (j = 0; emp != NULL && j < index; j++)
	{
		emp = emp->next;
	}
	return (emp);
}
