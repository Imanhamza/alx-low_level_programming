#include <stdio.h>
/**
 * main - 
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
