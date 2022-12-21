#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * Return: 0
 */
char *string_toupper(char *)
{
	int i;
	char ch;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 123)
		{
			ch[i] = ch[i] - 32;
		}
		else if (ch[i] >= 65 && ch[i] <= 90)
		{
			ch[i] = ch[i];
		}
	}
}
