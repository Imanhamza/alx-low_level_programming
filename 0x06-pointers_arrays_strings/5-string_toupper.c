#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer to a char
 * Return: @c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 123)
		{
			c[i] = c[i] - 32;
		}
		else if (c[i] >= 65 && c[i] <= 90)
		{
			c[i] = c[i];
		}
	}
}
