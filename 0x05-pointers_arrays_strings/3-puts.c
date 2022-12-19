#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	/* loop to get all the char till the terminator */

	for (i = 0; str[i] = '\0'; i++)
	{
		_putchar(str[i]);
	}
	/* end the string with new end */
	_putchar('\n');

}
