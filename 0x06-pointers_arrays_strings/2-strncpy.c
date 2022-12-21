#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* find the ecxat byte to be the start point */

	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
		if (i >= n)
		{
			break;
		}
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
