#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: An integer
 * @index: index of the desired integer
 * Return:  the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* check if the index within 64 bit */
	if (index > 63)
		return (-1);
	/* return the value of each index */

	return ((n >> index) & 1);
}
