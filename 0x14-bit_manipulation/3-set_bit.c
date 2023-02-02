#include"main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: A pointer ro ineger
 * @index: where to put the 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || n == NULL)
		return (-1);

	*n |= (1 << index);
	return (1);
}
