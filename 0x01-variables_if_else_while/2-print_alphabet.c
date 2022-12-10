#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		ch = tolower(ch);
		puctchar(ch);
	}
	putchar("\n");
	return (0);

}
