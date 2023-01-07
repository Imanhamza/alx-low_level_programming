#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_num(char s[]);

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1, otherwise 0 if number contains non digit symbols
 */
int main(int argc, char *argv[])
{
	int sum = 0,
	    i;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i =0; i < argc; i++)
		{
			if (is_num(argv[i]) == 1)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}


/**
 * is_num - check if the string is a number
 * @s: string
 * Retrun: 0 or 1
 */
int is_num(char s[])
{
	int i,
	    length = strlen(s);
	for (i = 0; i < length; i++)
	{
		if (isdigit(s[i]))
		{
			return (1);
		}
	}
	return (0);
}
