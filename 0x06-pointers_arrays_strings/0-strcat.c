#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/* loop over dest to till the end, then loop over the second one */

	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	_putchar(' ');
	for(i = 0; src[i] != '\0'; i++)
	{
		_putchar(src[i]);
	}
	_putchar('\0');
}
