#include "main.h"

/**
 * rev_string - reverses a string
 * @s: An array
 *
 *Return: nothing
 */

void rev_string(char *s)
{
	int i, str_len, temp, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	str_len = i;
	for (j = 0; j < str_len / 2; j++)
	{
		temp = s[j];
		s[j] = s[str_len - 1 - j];
		s[str_len - 1 - j] = temp;
	}
}
