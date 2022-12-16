#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	_putchar(i + '0');
}
