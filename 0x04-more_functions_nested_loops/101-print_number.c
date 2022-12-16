#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer
 * Return: Nothing!
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i > 9)
	{
		print_number(i / 10);
	}
	_putchar(i %10 + '0');
}
