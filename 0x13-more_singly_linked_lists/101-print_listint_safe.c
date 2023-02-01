#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: A pointer to the head to linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	while (head)
	{
		if (head == NULL)
			exit(98);
		head = head->next;
		counter++;
	}

	return (counter);
}
