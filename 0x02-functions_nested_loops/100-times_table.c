#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of tables
 * Return: o (Success)
 */

void print_times_table(int n)
{
	while (n >= 0 && n <= 15)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				int ij = i * j;

				_putchar(ij + '0');
			}
		}
		_putchar('\n');
	}
}
