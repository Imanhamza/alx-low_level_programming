#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Retuen: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	} else if (last_digit ==0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	return (0);
}
