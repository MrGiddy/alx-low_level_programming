#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 - 9,
 * followed by a new line.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
