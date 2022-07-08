#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 - 14, followed by a new line
 */

void more_numbers(void)
{
	int j = 0, k;

	for (; j < 10; j++)
	{
		k = 0;
		for (; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
