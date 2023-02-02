#include "main.h"

unsigned int _atoi(char c);
/**
 * binary_to_uint - a function converts a binary number to an unsigned int
 * @b: A char of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0,
		     result = 0;
	int i,
	    strLen = 0,
	    base = 1;

	while (b[strLen] != '\0')
		strLen++;

	if (b == NULL)
		return (0);

	for (i = strLen - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = _atoi(b[i]);
		result += num * base;
		base *= 2;
	}
	return (result);
}

/**
 * _atoi - converts a char to int
 * @c: A char
 * Return: integer
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}
