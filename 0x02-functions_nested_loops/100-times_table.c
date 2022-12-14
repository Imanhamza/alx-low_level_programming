#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of tables
 * Return: o (Success)
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{

			for (j = i; j <= n; j++)
			{
				int multi = i * j;

				if (j == 0)
				{
					_putchar(multi + '0');
				}
				else if ( multi < 10 && j != 0)

				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi % 10) + '0');
				}
				else if (multi >= 10 && multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) _ '0');
				}
				else if (multi >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
