#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	/* Check if n is negative */
	if (n < 0)
	{
		_putchar('-'); /* Print a minus sign */
		n = -n; /* Make n positive */
	}

	/* Check if n is a single-digit number */
	if (n < 10)
	{
		_putchar(n + '0');  /* Print the digit */
		return; /* Return from the function */
	}

	/* Recusively call print_number with n with last digit chopped off */
	print_number(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}
