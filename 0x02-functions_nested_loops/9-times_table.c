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
			_putchar(j + ',' + (j + j));
		}
		_putchar('\n');
	}
}
