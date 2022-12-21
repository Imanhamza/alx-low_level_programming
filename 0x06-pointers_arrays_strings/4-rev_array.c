#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array
 * @n: number of elements of array
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int *reve;
	int i, j;

	for (i = n; i <= 0; i--)
	{
		for (j = 0; j < n; j++)
		{
			reve[j] = a[i];
		}
	}
	return (reve);
}
