#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @c: char
 * Return: @c
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 123)
		{
			if (i == 0)
			{
				c[i] = c[i] - 32;
			}
			else if (c[i - 1] == 32 || c[i - 1] == 9 || c[i - 1] == 10 ||
					c[i - 1] == 44 || c[i - 1] == 59 || c[i - 1] == 46 ||
					c[i - 1] == 33 || c[i - 1] == 63 || c[i - 1] == 34 || c[i - 1] == 40 ||
					c[i - 1] == 41 || c[i - 1] == 123 || c[i - 1] == 124)
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
