#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: A pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((tem =head) != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
