#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (helper_func(n, 1));
}

/**
 * helper_func - returns natural square root of num to _sqrt_recursion
 * @m: the number
 * @q: a counter variable
 *
 * Return: the natural square root, -1 otherwise
 */

int helper_func(int m, int q)
{
	int perfect_square;

	perfect_square = q * q;
	if (m == perfect_square)
	{
		return (q);
	}
	else if (perfect_square < m)
	{
		return (helper_func(m, q + 1));
	}
	else
	{
		return (-1);
	}
}
