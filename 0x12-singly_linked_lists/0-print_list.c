#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the head of the linked list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	/* start countting the number of nodes */
	size_t nodeCounter = 1;

	/* if there is no nodes return 0 */
	if (h == NULL)
		return (0);

	if (h->next != NULL)
	{
		/* check if the str is NULL or not */
		if (h->s != NULL)
			printf("[%d] %s\n", h->len, h->s);
		else
			printf("[%d] %s\n", 0, "(nil)");
		/* move to the next node */
		h = h->next;
		/* increase the counter */
		nodeCounter++;
	}
	/* print the last node */
	printf("[%d] %s\n", h->len, h->s);

	return (nodeCounter);
}
