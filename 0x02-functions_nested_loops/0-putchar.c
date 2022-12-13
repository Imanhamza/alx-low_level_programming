#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int size = sizeof(ch);

	for (int i = 0; i < size; i++)
	{
		_putchar(ch[i]);
	}
	putchar('\n');
	return (0);

}
