#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @c: string
 * Return: @c
 */

char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while ((c[i] >= 65 && c[i] <= 90) ||
				(c[i] >= 97 && c[i] <= 122))
		{
			if ((c[i] >= 65 && c[i] <= 77) ||
					(c[i] >= 97 && c[i] <= 109))
			{
				c[i] = c[i] + 13;
			}
			else
			{
				c[i] = c[i] - 13;
			}
			i++;
		}
		i++;
	}
	return (c);
}

