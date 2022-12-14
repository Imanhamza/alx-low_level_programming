#include "main.h"

/**
 * times_table - print 9 times table starting with 0
 * Return: 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ( j == 0)
			{
				_putchar((j * i) + '0');
			} else
			{
				if ((j * i) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((j*i) + '0');
				}
				else if ((j * i) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((j * i) / 10) + '0');
					_putchar(((j * i) % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
