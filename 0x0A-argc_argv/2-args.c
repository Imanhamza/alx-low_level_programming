#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
