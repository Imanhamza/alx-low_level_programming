#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the head of the linked list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
