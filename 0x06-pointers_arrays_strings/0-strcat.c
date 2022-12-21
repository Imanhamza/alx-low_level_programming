#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/* loop over dest to till the end, then loop over the second one */

	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
