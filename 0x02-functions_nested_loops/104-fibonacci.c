#include <stdio.h>

/**
 * main - program that prints the first 98 Fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, bool1, bool2;
	long int num1, num2, fn, fn1, num11, num22;

	num1 = 1;
	num2 = 2;
	bool1 = bool2 = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		if (bool1)
		{
			fn = num1 + num2;
			printf(", %ld", fn);
			num1 = num2;
			num2 = fn;
		}
		else
		{
			if (bool2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				bool2 = 0;
			}
			fn1 = (num11 + num22);
			fn = num1 + num2 + (fn1 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn1 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fn;
			num22 = (fn1 % 1000000000);
		}
		if (((num1 + num2) < 0) && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
