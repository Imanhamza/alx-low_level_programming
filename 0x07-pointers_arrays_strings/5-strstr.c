#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: A pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
				break;
			}
		}
	}
	return (0);
}
