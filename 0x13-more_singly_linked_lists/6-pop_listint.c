#include "lists.h"

/**
 * pop_listint - function that delete the head node o
 * @head: pointer to the first element in list
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *emp;
	int add;

	if (!head || !*head)
		return (0);
	add = (*head)->n;
	emp = (*head)->next;
	free(*head);
	*head = emp;
	return (add);
}
