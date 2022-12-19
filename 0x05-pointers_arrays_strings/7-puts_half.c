#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	/* find the length of string, then print the second half */
	int length = 0;
	int i, start2;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	
	/* declare the first of the second half */
	start2 = (length - 1) / 2;
	for (i = start2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
