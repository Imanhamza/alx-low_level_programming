#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 * Return: the sum of the elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *list;

	if (head == NULL)
		return (sum);

	for (list = head; list != NULL; list = list->next)
		sum = sum + list->n;
	return (sum);
}
