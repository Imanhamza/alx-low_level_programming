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
	new_table =  malloc(sizeof(hash_node_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (0);
	}
	str_dup = strdup(value);
	if (str_dup == NULL)
		return (0);
	index =  key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = str_dup;
			return (1);
		}
	}
	new_table->key = strdup(key);
	if (new_table->key == 0)
		return (0);

	new_table->value = str_dup;
	new_table->next = ht->array[index];
	ht->array[index] = new_table;
	return (1);
}
