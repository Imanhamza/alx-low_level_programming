#include "main.h"

/**
 * print_to_98 - prints all number from n numer to 98
 * @n: the start point
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	if ( n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else if ( n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
