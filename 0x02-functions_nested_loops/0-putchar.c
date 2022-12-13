#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";

	for (int i = 0; i < sizeof(ch); i++)
	{
		_putchar(ch[i]);
	}
	putchar('\n');
	return (0);

}
