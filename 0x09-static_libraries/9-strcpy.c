#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: the return value
 * @src: source
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	/* find the length of src to irritate, then copy the value into dest */

	int size1 = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		size1++;
	}

	for (i = 0; i < size1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
