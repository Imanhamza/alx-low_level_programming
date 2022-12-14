#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0;
 */

int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
