#include "search_algos.h"

/**
 * advanced_binary - A function that searches for a value in
 * a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 where NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - searches for a value in a sorted array
 * of integers using the advanced binary search algorithm (recursive)
 *
 * @array: pointer to the first element of the array
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: The value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
			printf("%d%s", array[i], (i != right) ? ", " : "");
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return advanced_binary_recursive(
						array, left, mid, value);
		}

		if (array[mid] < value)
			return advanced_binary_recursive(
					array, mid + 1, right, value);
		else
			return advanced_binary_recursive(
					array, left, mid - 1, value);
	}
	return (-1);
}
