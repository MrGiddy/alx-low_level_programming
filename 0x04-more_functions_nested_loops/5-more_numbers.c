#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 - 14, followed by a new line
 */

void more_numbers(void)
{
	int j = 0, k, l;

	for (; j <= 10; j++)
	{
		k = 0;
		for (; k <= 14; k++)
		{
			if (k > 9)
			{
				l = k / 10;
				_putchar(l + '0');
				l = k % 10;
				_putchar(l + '0');
			}
			else
			{
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
