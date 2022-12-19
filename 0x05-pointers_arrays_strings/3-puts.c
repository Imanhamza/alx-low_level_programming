#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * Return: 0
 */

void _puts(char *str)
{
	int size =  _strlen(str);
	int i;

	for (i = 0; i < size; i++)
	{
		fprintf(stdout, str[i]);
	}
}
