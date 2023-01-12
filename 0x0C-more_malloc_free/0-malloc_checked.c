#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: integer
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a,
		     *c;
	a = malloc(sizeof(int) * b);
	c = malloc(sizeof(int) * 98);

	if (a == NULL)
	{
		return (c);
	}
	return (a);
}
