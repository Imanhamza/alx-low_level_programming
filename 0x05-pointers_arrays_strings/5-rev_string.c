#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	/* find the siz of the string (with the terminator) */
	/* loopt to get the size */
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	/* loop to reverse the string starting from the size */

	size = size - 1;
	int j = 0;
	while (size > j)
	{
		swap_char(s + size, s + j);
		size--;
		j++;
	}

	/**
	 *  * swap_int - swaps the values of two integers
	 *   * @a: first integer
	 *    * @b: second integer
	 *     * Return: 0
	 *      */

	void swap_int(int *a, int *b)
	{
		int temp = *a;

		*a = *b;
		*b =temp;
	}
}
