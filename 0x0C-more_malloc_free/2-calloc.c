#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}

/**
 * _memset - set a memory with a constant byte
 *
 * @s: input pointer
 * @b: characters
 * @n: number of bytes
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
