#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: An integer
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (helper_prime(n, n / 2));
}

/**
 * helper_prime - checks if number is prime
 * @m: the number, passed in as n in is_prime_number
 * @q: n / 2
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int helper_prime(int m, int q)
{
	if (q == 1)
		return (1);

	else if (m % q == 0)
	{
		return (0);
	}
	else
	{
		return (helper_prime(m, q - 1));
	}
}
