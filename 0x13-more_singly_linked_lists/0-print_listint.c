#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: A pointer to the head of th list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
