#include "main.h"
/**
 * jack_bauer - prints every minute starting from 00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0, k = 0, l = 0, m = 0;

	while (i < (24 * 60))
	{
		_putchar(j + '0');
		_putchar(k + '0');
		_putchar(':');
		_putchar(l + '0');
		_putchar(m + '0');
		_putchar('\n');

		m++;
		if (m > 9)
		{
			m = 0;
			l++;
		}
		if (l > 5)
		{
			l = 0;
			k++;
		}
		if (k > 9)
		{
			k = 0;
			j++;
		}
		i++;
	}
}
