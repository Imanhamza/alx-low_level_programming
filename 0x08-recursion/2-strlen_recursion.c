#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	return (i);

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
}
