#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar\n";
	int size = sizeof(ch);
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(ch[i]);
	}
	return (0);

}
