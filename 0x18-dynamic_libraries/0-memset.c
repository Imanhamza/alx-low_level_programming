#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: pointer
 * @n: integer
 * @b: number of bytes
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* loop over the char and asgin it to s[i] */

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
