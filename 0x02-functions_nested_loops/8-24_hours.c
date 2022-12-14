#include "main.h"

/**
 * jack_bauer - prints every moment of the day of jack_bauer
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int first;
	int second;

	for (first = 0; first < 24; first++)
	{
		for (second = 0; second < 60; second++)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second / 10 + '0');
			_putchar(second % 10 + '0');
			_putchar('\n');

		}
	}
}
