#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: A pointer or Null
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i, size1 = 0,
		     size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* size of the first string */
	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	/* size of second string */
	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	new = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)));

	for (i = 0; i < size1; i++)
		new[i] = s1[i];

	for (i = 0; i < size2; i++)
		new[i + size1] = s2[i];
	new[size1 + size2] = '\0';

	if (new == NULL)
		return (NULL);
	return (new);
	free(new);
}
