#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: First string
 * @s2: second string
 * @n: number of bytes to reallocated
 * Return: A pointer to newly allocated space in memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *first;
	unsigned int j, i,
		     size1 = 0,
		     size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	if (n >= size2)
		n = size2;

	first = malloc((size1 + n + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		first[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		first[i] = s2[j];
		i++;
	}

	first[i] = '\0';
	return (first);

	free(frist);
	
}
