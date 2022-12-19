#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements within array
 * Return: 0
 */
void print_array(int *a, int n)
{
	/* loop to find all elements of an array */
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar(a[i] + '0');
		}

		_putchar(a[i] + '0');
		_putchar(',');
		_putchar('\n');
	}
}
