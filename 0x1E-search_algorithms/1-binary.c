#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 where NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1,
	       left = 0,
	       mid,
	       i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], (i != right) ? ", " : "");
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
