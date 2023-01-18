#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Number of argument
 * @argv: An array of arrgument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i,
	    bytesNum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytesNum = argv[1];
	if (bytesNum < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *func = (char *) main;

	for (i = 0; i < bytesNum; i++)
	{
		printf("%02x", func[i] & 0xFF);
		if (i != bytes - 1)
			printf (" ");
	}
	printf("\n");
	return (0);
}
