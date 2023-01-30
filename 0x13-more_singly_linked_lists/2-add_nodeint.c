#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list
 * @head: A pointer to the head of the list
 * @n: integer
 * Return:  the address of the new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head != NULL)
		newNode->next = *head;
	else
		newNode->next = NULL;

	newNode->n = n;
	*head = newNode;
	return (*head);
}
