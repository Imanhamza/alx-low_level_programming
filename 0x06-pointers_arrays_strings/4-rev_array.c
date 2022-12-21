#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array
 * @n: number of elements of array
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int rev;
	int i = 0,
	    j = n - 1;

	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;

		i++;
		j--;
	}
}
