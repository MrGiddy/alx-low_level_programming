#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: character pointer to string address
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j, strlen;

	/* finding length of str */
	for (i = 0, strlen = 0; str[i] != '\0'; i++, strlen++)
		;

	/* printing every other character */
	j = 0;
	while (j < strlen)
	{
		if (j == 0 || (j % 2) == 0)
			_putchar(str[j]);

		j++;
	}
	_putchar('\n');
}
