#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int counter;

	counter = 0;
	while (counter < 10)
	{
		if (counter == 2 || counter == 4)
		{
			counter++;
			continue;
		}
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
