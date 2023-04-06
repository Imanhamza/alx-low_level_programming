#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash_table
 * @key: the key
 * @value: value to be added
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_table;
	char *str_dup;
	unsigned long int index, i;

	/* key can not be an empty string, ht can't be null */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Allocate a memory for the new table */
	new_table =  malloc(sizeof(hash_node_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (0);
	}

	/* duplicate the value */
	str_dup = strdup(value);
	if (str_dup == NULL)
		return (0);

	/* get the index of the key from previous function key_index */
	index =  key_index((const unsigned char *)key, ht->size);
	for ( i = index; ht->array[i]; i++)
	{
		/* compare the key to the current array key */
		if (strcmp(ht->array[i]-> key, key) == 0)
		{
			ht->array[i]->value = str_dup;
			return (1);
		}
	}
	new_table->value = str_dup;
	new_table->next = ht->array[index];
	ht->array[index] = new_table;

	return (1);
}
