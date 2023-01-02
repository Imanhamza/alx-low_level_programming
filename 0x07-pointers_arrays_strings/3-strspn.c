#include "main.h"

/**
 * int _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: the desired string to be checked
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int i, j, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 1; /* flag */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				f = 0;
				break;
			}
		}
		if (f == 1)
		{
			break;
		}
	}
	return (counter);
}
