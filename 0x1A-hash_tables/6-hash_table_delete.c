#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table to be deleted
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newNode, *next_node;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		newNode = ht->array[i];
		while (newNode != NULL)
		{
			next_node = newNode->next;
			free(newNode->value);
			free(newNode->key);
			free(newNode);
			newNode = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
