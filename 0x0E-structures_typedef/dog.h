#ifndef DOG_H
#define DOG_H


/**
 * struct dog - sturct DOG card
 * @name: name of the dog
 * @age: inger represents the age
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
