#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: An integer, 0 if equal, +ve value if s1 > s2, -ve value if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2, i, j;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	for (i = 0; i <= len_s1; i++)
	{
		for (j = 0; j <= len_s2; j++)
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
