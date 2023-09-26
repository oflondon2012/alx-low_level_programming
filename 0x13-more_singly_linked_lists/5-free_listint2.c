#include "lists.h"

/**
 * free_listint2 - function that free a listint_t list
 * @head: pointer to first element
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *emp;

	if (head == NULL || *head == NULL)
		return;
	for (; *head != NULL;)
	{
		emp = (*head)->next;
		free(*head);
		*head = emp;
	}
	*head = NULL;
}
