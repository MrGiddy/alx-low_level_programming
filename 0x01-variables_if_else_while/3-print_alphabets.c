#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lwr_go, lwr_last;
	char upr_go, upr_last;

	lwr_go = 'a';
	lwr_last = 'z';

	while (lwr_go <= lwr_last)
	{
		putchar(lwr_go);
		lwr_go++;
	}

	upr_go = 'A';
	upr_last = 'Z';

	while (upr_go <= upr_last)
	{
		putchar(upr_go);
		upr_go++;
	}
	putchar('\n');

	return (0);
}
