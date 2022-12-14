#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of tables
 * Return: 0 (Success)
 */

void print_times_table(int n)
{
	int i, j, out;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				out = i * j;
				_putchar(44);
				_putchar(32);
				if (out <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(out + 48);
				}
				else if (out <= 99)
				{
					_putchar(32);
					_putchar((out / 10) + 48);
					_putchar((out % 10) + 48);
				}
				else
				{
					_putchar(((out / 100) % 10) + 48);
					_putchar(((out / 10) % 10) + 48);
					_putchar((out % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
