#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: character pointer to string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int str_len, index;

	/* length of string minus null char */
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	/* print second half of str */
	str_len++; /* logic depends on null char included in len */
	index = str_len / 2;
	for (; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
