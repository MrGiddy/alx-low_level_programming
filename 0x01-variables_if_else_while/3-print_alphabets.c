#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase, then uppercase
 */
int main(void)
{
	char lwr_char = 'a';
	char upr_char = 'A';

	while (lwr_char <= 'z')
	{
		putchar(lwr_char);
		lwr_char++;
	}
	for (upr_char;upr_char <= 'Z';upr_char++)
	{
		putchar(upr_char);
	}
	putchar('\n');
	return (0);
}
