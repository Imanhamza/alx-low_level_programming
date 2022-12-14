#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: number under test
 * Return: 1 if it positive, -1 if it negative, 0 if it zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
