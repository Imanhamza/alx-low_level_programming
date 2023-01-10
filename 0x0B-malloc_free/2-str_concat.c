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
	unsigned int i, j,
		     size1 = 0,
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

	new = malloc((size1 * sizeof(char)) + ((size2 + 1) * sizeof(char)));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		new[i] = s1[i];

	for (j = 0; j < size2; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';

	return (new);
	free(new);
}
