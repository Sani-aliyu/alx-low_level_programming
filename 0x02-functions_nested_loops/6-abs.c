#include "main.h"
#include <stdlib.h> 

/**
 * _abs - computes the absolute value of an integrer
 *
 * @a: the int to check
 *
 * Return: the absolute value of int
 *
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	return (-a);
}
