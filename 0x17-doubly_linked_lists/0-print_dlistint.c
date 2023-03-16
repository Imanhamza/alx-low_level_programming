#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: A pointer to the header of doubly list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* set the counter for the nodes */
	int counter = 0;

	/* check if list is empty "h == NULL" */
	if (h == NULL)
		return (counter);

	/* check the prev node */
	while (h->prev != NULL)
		h = h->prev;

	/* find the number of nodes */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
