#include "lists.h"

/**
 * sum_listint - funtion that return the sum of data in a list
 * @head: pointer to first node in list
 *
 * Return: 0 if the ;ist is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *emp = head;
	int add = 0;

	for  (emp = head; emp != NULL; emp = emp->next)
	{
		add = add + emp->n;
	}
	return (add);
}
