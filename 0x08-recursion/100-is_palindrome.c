#include "main.h"

int _strlen(char *s);
int _palindrome(char *s, int i, int length);

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: char
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (_strlen(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * _palindrome - check if the string is a Palindrome
 * @s: char
 * @i: integer
 * @length: length from the previous func
 * Return: 1 or 0
 */

int _palindrome(char *s, int i, int length)
{
	if (i >= length)
	{
		return (1);
	}
	if (*(s + i) != *(s + length -1))
	{
		return (0);
	}
	return (_palindrome(s, i + 1, length - 1));
}
