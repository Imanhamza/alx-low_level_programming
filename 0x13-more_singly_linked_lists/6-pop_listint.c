#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: the head of the linked list
 * Return: n or 0;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp,
		  *nextNode;
	int node;

	if (*head == NULL)
		return (0);

	temp = *head;
	nextNode = temp->next;

	node = temp->n;

	free(temp);

	*head = nextNode;

	return (node);
}
