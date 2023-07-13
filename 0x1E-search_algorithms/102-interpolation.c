#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 where NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* Expectation of the range of the array */
	size_t low = 0,
	       high = size - 1,
	       pos;

	if (array == NULL)
		return (-1);

	for (; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	/*printf("Value checked array[%ld] is out of range\n", pos);*/

	return (-1);
}

