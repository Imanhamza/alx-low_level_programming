#include "main.h"

/**
 * print_to_98 - prints all number from n numer to 98
 * @n: the start point
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);

}
