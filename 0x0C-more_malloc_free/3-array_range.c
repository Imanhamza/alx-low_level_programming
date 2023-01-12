#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the start of the integers
 * @max: the maximum value
 * Return: a pointer or NULL
 */

int *array_range(int min, int max)
{
	int *arr,
	    i, size;

	if (min > max)
		return (NULL);
	else
		size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);

	free(arr);
}

