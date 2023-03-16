#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the list
 * Return: eturns the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* set the counter of the elements */
	int counter = 0;

	/* check if the list is epmpty */

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
