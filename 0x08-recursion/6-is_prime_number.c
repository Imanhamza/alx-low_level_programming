#include "main.h"

int _prime_num(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: integer
 * Return: A number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_num(n, n - 1));
}

/**
 * _prime_num - check if the number is prime
 * @n: integer
 * @i: ineger
 * Return: A number
 */

int _prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (_prime_num(n, i - 1));
}
