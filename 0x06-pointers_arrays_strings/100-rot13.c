#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: a string to be encoded
 * Description: rot13 rotates an alphabet letter
 * with the 13th letter after it
 *
 * Return: rotated string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
		{
			str[i] += 13;
		}
		else if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
		{
			str[i] -= 13;
		}
	}
	return (str);
}
