#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0,
	    j;

	while (i < argc)
	{
		j = i;
		i++;
	}
	printf("%d\n", j);
	return (0);

}
