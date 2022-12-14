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
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				int ij = i * j;

				if (ij < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ij + '0');
				}
				else if (ij >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((ij / 10) + '0');
					_putchar((ij % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
	break;
}
