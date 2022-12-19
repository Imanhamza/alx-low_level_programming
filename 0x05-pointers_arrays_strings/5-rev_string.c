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
	for (i = size - 1; i >= 0; i--)
	{
		return (s[i]);
	}
}
