#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 * @n: An integer input n
 *
 * Description: Prints + if n > zero, prints 0 if n = zero,
 * and prints - if n is < zero
 *
 * Return: 1 if n is > zero, 0 if n == zero
 * and -1 if n < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
