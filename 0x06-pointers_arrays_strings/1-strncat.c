#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* loop over first string */
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	_putchar(' ');
	/* check if the src has n bytes or more, or not */
	for(i = 0; src[i] != '\0'; i++)
	{
		if (i >= n)
		{
			_putchar(src[i]);
		}
	}
	_putchar('\0');
}
