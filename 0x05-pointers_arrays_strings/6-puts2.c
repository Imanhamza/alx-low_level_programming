#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	/* loop over the string and print it out*/
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i] + 1);
	}
	_putchar('\n');
}
