#include "search_algos.h"

/**
 * exponential_search - A function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 where NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1,
	       left, right, mid, i;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
				array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
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
