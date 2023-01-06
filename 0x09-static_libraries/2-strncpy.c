#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of characters to be copied
 * Return: src
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* find the ecxat byte to be the start point */

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
