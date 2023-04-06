#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *newNode;
	unsigned long int i;
	bool comma_flag = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		newNode = ht->array[i];
		while (newNode != NULL)
		{
			/*newNode = ht->array[i];*/
			if (comma_flag)
				printf(", ");
			printf("{%s}: {%s}", newNode->key, newNode->value);
			comma_flag = true;
			newNode = newNode->next;
		}
	}

	printf("}\n");
}
