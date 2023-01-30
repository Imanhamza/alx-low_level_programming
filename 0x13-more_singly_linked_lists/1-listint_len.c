#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: A pointer to the head of linked list
 * Return: Number of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
