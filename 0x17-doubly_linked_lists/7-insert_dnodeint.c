#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: A pointer to the head of the list
 * @idx: the position to add the new node
 * @n: integer
 * Return: A pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode,
		   *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (current != NULL && idx - 1 == count)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	if ((idx - 1) != count)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = current->next;
	newNode->prev = current;
	current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
