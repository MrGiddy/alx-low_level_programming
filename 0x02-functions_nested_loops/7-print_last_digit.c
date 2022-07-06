#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: An integer value
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int p;

	if (n < 0)
	{
		p = (n * -1) % 10;
		_putchar(p + '0');
		return (p);
	}
	else
	{
		p = n % 10;
		_putchar(p + '0');
		return (p);
	}
	return (0);
}
