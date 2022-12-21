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
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
