#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @c: string
 * Return: @c
 */

char *leet(char *c)
{
	int i, j;
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int integer[] = {52, 51, 55, 49};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == upper[j] || c[i] == lower[j])
			{
				c[i] = integer[j];
				break;
			}
		}
	}
	return (c);
}
