#include "main.h"

/**
 * _strcmp - compares two strings.
 * @*s1: first string
 * @*s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				continue;
			}
			else if (s1[i] != s2[j])
			{
				return (i - j);
			}
		}
	}
	return (0);
}
