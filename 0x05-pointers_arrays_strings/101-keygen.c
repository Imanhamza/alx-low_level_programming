#include <stdio.h>

/**
 * main - generates random valid passwords for the program
 * Return: generated password
 */
int main(void)
{
	/* generate random number */
	int sum;
	char i;

	srand(time(NULL));

	while (sum <= 2645)
	{
		i = rand() % 128;
		sum = sum + i;
		putchar(i);
	}
	putchar(2772 - sum);

	return (0);
}
