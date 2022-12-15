#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the charcter under test
 * Rrturn: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 0 && c <= 9))
	{
		return (1);
	}
	return (0);
}
