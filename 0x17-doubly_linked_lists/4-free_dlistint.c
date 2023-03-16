#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: A pointer to the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
