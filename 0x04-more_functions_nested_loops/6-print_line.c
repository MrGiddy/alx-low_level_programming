#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print underscore
 *
 * Description: n determines how long the line is
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
