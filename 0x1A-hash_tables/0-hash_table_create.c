#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: he size of the array
 * Return: a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table_t*) * size);

	for (i = 0; i < size; i++)
		hash_table->array[1] = NULL;

	return (hash_table);
}
