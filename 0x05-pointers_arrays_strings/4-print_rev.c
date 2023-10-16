#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int str_len;

	str_len = _strlen(s) - 1;

	for (; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns length of a string
 * @s: a string
 * Return: lenght of string s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
