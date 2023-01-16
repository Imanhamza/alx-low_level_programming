#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d);
	}
}
