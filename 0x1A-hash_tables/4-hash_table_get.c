#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newNode;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	newNode = ht->array[i];

	while (newNode != NULL)
	{
		if (strcmp(newNode->key, key) == 0)
			return (newNode->value);
		newNode = newNode->next;
	}

	return (NULL);
}
