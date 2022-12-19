#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	/* find the size of the string without the terminator */
	int size = _strlen(s);
	int i;

	/* loop for reverse the string */

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
