#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0; /* to get the length */
	int i; /* counter for the char in the string without the terminator */

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);

}
