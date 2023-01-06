#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: string
 * @c: first char in the string
 * Return: s
 */

char *_strchr(char *s, char c)
{
	/* irritate over the string to find the char */

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
