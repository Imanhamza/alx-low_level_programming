#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int sum = 0;

	for (i = 0; s1[i]; i++)
	{
		for (j = 0; s2[j]; j++)
		{
			int diff = int s1[i] - int s2[j];
			sum = sum + diff;
		}
	}
	return (sum);
}
