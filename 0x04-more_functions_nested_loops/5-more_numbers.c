#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 through 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar((col / 10) + 48);
			}
			_putchar((col % 10) + 48);
		}
		_putchar('\n');
	}
}
