#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: An integer, 0 if equal, +ve value if s1 > s2, -ve value if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 -  *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (0);
}
