#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	int chctr;

	chctr = c;

	if (chctr >= 97 && chctr <= 122)
		return (1);
	else if (chctr >= 65 && chctr <= 90)
	{
		return (1);
	}
	else
		return (0);
}
