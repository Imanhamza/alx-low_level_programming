#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : pointer to the new str
 * Return: NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *sec_str;
	int i, j,
	    size = 0;

	if (str == NULL)
		return (NULL);

	/* find the lenght of the string */
	for (j = 0; str[j] != '\0'; j++)
		size++;

	sec_str = malloc((size + 1) * sizeof(char));

	if (sec_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sec_str[i] = str[i];

	return (sec_str);
	free(sec_str);
}
