#include "dog.h"
#include <stdlib.h>
#include <string.h>

void _memfill(char *s, int s_len, char *dest);

/**
 * new_dog -  a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: The name of the owner
 * Return: Null or nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_len,
	    owner_len;

	name_len = strlen(name);
	owner_len = strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return NULL;

	newDog->name = malloc(sizeof(char) * name_len + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	_memfill(name, name_len, newDog->name);

	newDog->owner = malloc(sizeof(char) * owner_len + 1);
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	_memfill(owner, owner_len, newDog->owner);
	
	newDog->age = age;
	return (newDog);
}

/**
 * _memfill - copy string to allocated memory
 * @s: first string
 * @s_len: length of the string
 * @dest: destination
 */

void _memfill(char *s, int s_len, char *dest)
{
	int i;

	for (i = 0; i < s_len; i++)
		dest[i] = s[i];
	dest[i] = '\0';
}
