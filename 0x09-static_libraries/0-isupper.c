#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: ascii number of the charcter
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
