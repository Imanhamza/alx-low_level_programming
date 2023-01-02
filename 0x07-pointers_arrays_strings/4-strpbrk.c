#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: the desired string to be seachred for
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
