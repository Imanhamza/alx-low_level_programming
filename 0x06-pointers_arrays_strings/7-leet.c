#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @c: string
 * Return: @c
 */

char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 65 || c[i] == 97)
		{
			c[i] = 52;
		}
		else if (c[i] == 69 || c[i] == 101)
		{
			c[i] = 51;
		}
		else if (c[i] == 79 || c[i] == 111)
		{
			c[i] = 48;
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			c[i] = 55;
		}
		else if (c[i] == 79 || c[i] == 108)
		{
			c[i] = 49;
		}
	}
	return (c);
}
