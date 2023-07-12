#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 where NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size),
	    prev = 0,
	    curr = step;

	if (array == NULL)
		return (-1);

	/* Jumping forward until the target value is found or surpassed */
	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	/* Performing linear search within the identified block */
	while (prev <= curr && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
