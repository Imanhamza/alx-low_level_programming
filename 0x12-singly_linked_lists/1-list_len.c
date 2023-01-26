#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t list
 * @h: A head node
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
