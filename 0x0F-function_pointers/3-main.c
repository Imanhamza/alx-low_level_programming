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
	if (get_op_func(operator) == NULL ||
			operator != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
