#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: A pointer to the head of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL,
		  *nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;

	return (*head);
}
