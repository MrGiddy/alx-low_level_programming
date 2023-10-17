#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char ch;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < (len / 2); i++)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
	s[len] = '\0';
}
