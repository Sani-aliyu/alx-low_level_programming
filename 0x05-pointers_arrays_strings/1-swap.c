#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a : first integer
 * @b : Second interger
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
