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

	int i = 0;
	int j;

	while (src[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		src[i++] = dest[j];
	}
	return (src);
}
