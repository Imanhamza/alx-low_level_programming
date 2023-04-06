#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table to be deleted
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newNode;
	unsigned long int i;

	/* check if the table and it components is present */
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	/* loop over the table and free its components */
	for (i = 0; i < ht->size; i++)
	{
		newNode = ht->array[i];
		while (newNode != NULL)
		{
			newNode = newNode->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);

			ht->array[i] = newNode;
		}
	}

	free(ht->array);
	free(ht);
}
