#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: An integer, 0 if equal, +ve value if s1 > s2, -ve value if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				return (0);
			}
			else if (s1[i] < s2[j])
			{
				return (-15);
			}
			else
			{
				return (15);
			}
		}
	}
	return (0);
}
