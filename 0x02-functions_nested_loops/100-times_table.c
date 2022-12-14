#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of tables
 * Return: o (Success)
 */

void print_times_table(int n)
{

	if (n <= 15 && n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int multi = i * j;
				if (j == 0)
				{
					_putchar('0' + multi);
				}
				else if (result >= 10)
				{
					_putchar(' ');
					_putchar('0' + (multi / 10));
					_putchar('0' + (multi % 10));
				}
				else if (result >= 100)
				{
					_putchar(' ');
					_putchar('0' + (multi / 100));
					_putchar('0' + ((multi / 10) % 10));
					_putchar('0' + (multi % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
