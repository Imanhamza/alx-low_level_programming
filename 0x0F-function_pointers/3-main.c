#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1,
	    num2;
	char *operator;
	int (*func)(int, int);

	/* chaeck for the presence of the arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* after checking, set the values of the var */
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	/* check fo the precensence of the operator */
	func = get_op_func(operator);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == 37 || *operator == 47) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
