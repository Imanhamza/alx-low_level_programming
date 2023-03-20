#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* loop over first string */
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
