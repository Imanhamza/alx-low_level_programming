#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	/* find the size of the string without the terminator */
	/* loop to get the size */
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}

	/* loop for reverse the string */

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
