#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: integer
 * @size: size of array
 * Return: array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0,
	    sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + (size * i + i));
		sum2 = sum2 + *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
