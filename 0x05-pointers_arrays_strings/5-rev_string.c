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
	i = 0;
	while (size > i)
	{
		/* swap the chars */
		char tmp = *(s + size);
		*(s + size) = *(s + i);
		*(s + i) = tmp;

		size--;
		i++;
	}
}
