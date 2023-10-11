#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int chctr;

	chctr = c;

	if (chctr >= 97 && chctr <= 122)
		return (1);
	else
		return (0);
}
