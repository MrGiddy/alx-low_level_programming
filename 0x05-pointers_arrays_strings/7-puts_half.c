#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	int len, half_len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
		half_len = (len) / 2;
	else
		half_len = (len + 1) / 2;

	for (; half_len < len; half_len++)
	{
		_putchar(str[half_len]);
	}
	_putchar('\n');
}
