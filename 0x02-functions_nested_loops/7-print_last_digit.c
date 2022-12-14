#include "main.h"

/**
 * print_last_digit - print the last digit of a certain number
 * @i: the number under test
 * Return : the value of the last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -i;
		return (i %10);
	}
	return (i % 10);
}
