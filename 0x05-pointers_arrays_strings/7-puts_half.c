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

	half_len = (len) / 2;
	for (; half_len < len; half_len++)
	{
		_putchar(str[half_len]);
	}
	_putchar('\n');
}

/**
 * find the length of the string
 * divide the length of the string by two
 * store the half length in a variable, n
 * move through the string
 * if position in string is n and n is odd, print character at the position
 * increment n
 * print the characters up to the end of the string
 *
 */
