#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: A passed string
 * Return:  the address of the new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode,
	       *temp;
	size_t strLen = 0;

	while (str[strLen] != '\0')
		strLen++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strLen;
	newNode->next = NULL;

	temp = *head;

	if(temp == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (*head);
}
