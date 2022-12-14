#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *Return: 0(success)
 */
int main(void)
{
	long int i, num1 = 1, num2 = 2, sum = 0;

	for (i = 1; i < 50; i++)
	{
		printf("%ld, ", num1);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (i == 49)
		{
			printf("%ld\n", num1);
		}
	}
	return (0);
}
