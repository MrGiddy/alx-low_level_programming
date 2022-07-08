#include "main.h"

/**
 * print_square - prints a square, followed by a line
 * @size: the dimensions of the square
 *
 * Description: the square is printed using #
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
