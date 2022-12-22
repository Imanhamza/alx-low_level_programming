#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @c: string
 * Return: @c
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 123))
		{
			c[i] = c[i] + 13;
		}
	}
	return (c);
}

