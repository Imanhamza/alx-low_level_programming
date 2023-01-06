#include "main.h"

/**
 * _islower - check if the charcter is lower or not
 * @c: letter under test
 * Return: 1 when it is lower, 0 otherwise
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
