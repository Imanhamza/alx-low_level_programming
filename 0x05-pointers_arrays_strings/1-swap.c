#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp; /* to store the value of the first int */

	temp = *a; /* make the temp is the address of the a*/
	*a = *b; /* chamge the first one with the second */
	*b = temp; /* then let the second int have the value of temp */

}
