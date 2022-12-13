#include "main.h"

/**
 * print_alphabet_x10 - print alphabet characters 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch1;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch1 = 'a'; ch1 <= 'z'; ch1++)
		{
			_putchar(ch1);
		}
		_putchar('\n');
	}
}
