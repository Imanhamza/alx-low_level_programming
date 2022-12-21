#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @c: string
 * Return: @c
 */

char *leet(char *c)
{
	int j, i = 0;
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int integer[] = {52, 51, 55, 49};

	while (c[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == upper[j] || c[i] == lower[j])
			{
				c[i] = integer[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
