#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: A pointer to the head of the linked list
 * @idx: the index of the node
 * @n: integer
 * Return: : the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current,
		  *temp;
	unsigned int i;

	current = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	for (i = 0; i < idx - 1 && *head != NULL; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else if (current->next)
	{
		temp->next = current->next;
		current->next = temp;
	}
	else
	{
		temp->next = NULL;
		current->next = temp;
	}
	return (temp);
}
