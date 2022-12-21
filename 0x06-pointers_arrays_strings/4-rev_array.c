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
	int i, j;

	for (i = n; i <= 0; i--)
	{
		for (j = 0; j < n; j++)
		{
			rev = a[i];
			a[i] = a[j];
			a[j] = rev;
		}
	}
}
