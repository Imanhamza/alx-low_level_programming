#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 100; first++)
	{
		for (second = 0; second < 100; second++)
		{
			if (second > first)
			{
				putchar(first / 10 + '0');
				putchar(first % 10 + '0');
				putchar(' ');
				putchar(second / 10 + '0');
				putchar(second % 10 + '0');

				if (first * 100 + second != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
