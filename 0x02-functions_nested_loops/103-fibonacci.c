#include <stdio.h>

/**
 * main - prints the add of the even-valued
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x, y, z, out;

	x = 1;
	y = 2;
	z = out = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if ((x % 2) == 0)
		{
			out += x;
		}
	}
	printf("%ld\n", out);
	return (0);
}
