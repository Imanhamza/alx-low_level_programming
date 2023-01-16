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

/**
 * dog_t - a new type of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
