#include "main.h"

/**
 * _isalpha - check if the charcter is alphbetic or not
 * @c: charcter under test
 * Return: 1 if it alpha, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
