#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0, j, k;

	while (i < 10)
	{
		j = 0;
		for (; j < 10; j++)
		{
			k = j * i;
			if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0'); /*first digit*/
				_putchar(k % 10 + '0'); /*second digit*/
			}
			else
			{
				/* for second to 9th column */
				if (j > 0 && j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar(k + '0');
				}
			}
		}
		_putchar('\n');
		i++;
	}
}
