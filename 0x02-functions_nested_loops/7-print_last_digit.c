#include "main.h"

/**
 * print_last_digit - print the last digit of a certain number
 * @i: the number under test
 * Return : 0
 */

int print_last_digit(int i)
{
	int ld = i % 10;
	
	if (ld < 0)
	{
		ld = -ld;
	}

	_putchar(ld + '0');
	return (ld);
}
