#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = n; j < i; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
