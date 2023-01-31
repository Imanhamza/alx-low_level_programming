#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: the head of the linked list
 * Return: the sum of the elements of the list
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
