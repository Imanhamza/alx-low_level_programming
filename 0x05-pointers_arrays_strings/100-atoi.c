#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	/* irritate the string to find out what in it */
	int i;
	int sign = 1;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		return (n * sign);
	}
}


