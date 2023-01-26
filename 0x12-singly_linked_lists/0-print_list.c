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
	size_t nodeCounter = 0;

	while (h)
	{
		/* check if the str is NULL or not */
		if (h->s == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%u] %s\n", h->len, h->s);
		/* move to the next node */
		h = h->next;
		/* increase the counter */
		nodeCounter += 1;
	}

	return (nodeCounter);
}
