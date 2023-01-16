#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: Typedef of struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
