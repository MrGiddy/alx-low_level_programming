#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * x: An integer, the base
 * y: An integer, the exponent
 * Return: Result of exponentiation
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 1)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
