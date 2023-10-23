#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The input string
 * @c: The character to locate
 * Return: A pointer to the first occurrence of c in s, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return (NULL);
}
