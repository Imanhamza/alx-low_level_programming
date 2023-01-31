#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: A pointer to the head to linked list.
 * @index: index for the deleted node.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current,
		  *temp;
	unsigned int i;

	current = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			temp = current;
			current = current->next;
			if (current == NULL)
				return (-1);
		}
		temp->next = current->next;
		free(current);
		return (1);
	}
}
