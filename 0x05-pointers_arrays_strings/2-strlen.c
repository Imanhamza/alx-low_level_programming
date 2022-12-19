#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != "\n"; i++)
	{
		length++;
	}
	return (length);

}
