#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @c: string
 * Return: @c
 */

char *rot13(char *c)
{
	/* arrays for all the charcters and its code */
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
	    output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;
	/* loop over the input to check if the string equal to one of it and replace with the output */

	for (i = 0; input[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == input[i])
			{
				c[j] = output[i];
			}
		}
	}
	return (c);
}
