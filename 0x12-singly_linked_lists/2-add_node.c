#include "lists.h"

/**
 * *add_node -  adds a new node at the beginning of
 * list_t list
 * @*head: head of the list
 * @str: string passed
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t strLen = 0;

	while (str[strLen] != '\0')
		strLen++;

	newNode = malloc(sizeof(list_t));
	if (newNode ==NULL)
		return (NULL);

	 if (*head != NULL)
		 newNode->next = *head;
	 else
		 newNode->next = NULL;

	 newNode->str = strdup(str);
	 newNode->len = strLen;
	 *head = newNode;
	 return (*head);
}
