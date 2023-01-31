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
	if (head == NULL || temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		for (i = 0; i < idx -1; i++)
		{
			current = current->next;
			if(current == NULL)
				return (NULL);
		}
		temp->next = current->next;
		current->next = temp;
	}
	return (temp);
}
