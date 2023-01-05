#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: A number
 */

int _square_root(int n, int i);

int _sqrt_recursion(int n)
{
	return (_square_root(n, 0));
}

/**
 * _square_root - recuress the natural square root of a number
 * @n: integer
 * @i: integer
 * Return: Th square root
 */

int _square_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_square_root(n, i + 1));
}

