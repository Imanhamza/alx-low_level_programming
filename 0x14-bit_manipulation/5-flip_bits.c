#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: First integer
 * @m: Second integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*find the matched bits between two int */
	unsigned int f = n ^ m;
	int counter = 0; /* to count the number of the bits */
	while (f)
	{
		/*count the number of fiff */ 
		if (f & 1)
			counter++;
		/* move on bit rigth */
		f >>= 1;
	}
	return (counter);
}
