#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num; /* unsigned int to hold the absolute value of n */

	/* Check if n is negative */
	if (n < 0)
	{
		_putchar('-'); /* Print a minus sign */
		n = -n; /* Make n positive */
	}

	num = n; /* Assign absolute n to num */

	/* Check if n is a single-digit number */
	if (num < 10)
	{
		_putchar(num + '0');  /* Print the digit */
		return; /* Return from the function */
	}

	/* Recusively call print_number with n with last digit chopped off */
	print_number(num / 10);

	/* Print the last digit */
	_putchar(num % 10 + '0');
}
