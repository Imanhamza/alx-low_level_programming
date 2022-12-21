#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int sum = 0;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		int diff;

		if (s1[i] == s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}

		diff = s1[i] - s2[i];
		sum = sum + diff;
	}
	return (sum);
}
