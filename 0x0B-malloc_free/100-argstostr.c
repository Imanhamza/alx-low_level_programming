#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: Arguments
 * Return: A pointer to a new string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int i, j,
	    f = 0,
	    size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	out = malloc((size + 1) * sizeof(char));

	if (out == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			out[f] = av[i][j];
			f++;
		}
		out[f] = '\n';
		f++;
	}
	return (out);
	free(out);
}
