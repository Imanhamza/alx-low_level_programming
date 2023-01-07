#include "main.h"
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: A number of attributes
 * @argv: Array
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int money,
	    cents = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);

		while (money > 0)
		{
			if (money >= 25)
				money -= 25;
			else if (money >= 10)
				money -= 10;
			else if (money >= 5)
				money -= 5;
			else if (money >= 2)
				money -= 2;
			else
				money -= 1;
		cents += 1;
		}
	}
	printf("%d\n", cents);
	return (0);
}
