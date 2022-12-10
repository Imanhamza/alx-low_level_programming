#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		ch = tolower(ch);
		putchar(ch);
		if (ch == 'z')
		{
			for (ch = 'A'; ch <= 'Z'; ch++)
			{
				putchar(ch);
			}
			break;
		}
	}
	putchar('\n');
	return (0);

}
