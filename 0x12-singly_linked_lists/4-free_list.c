#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: A pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
