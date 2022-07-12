#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: char type pointer
 *
 * Description: standard lib not allowed
 * only use _putchar
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	/* calculate lengh of s */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* print the reversed string */
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
