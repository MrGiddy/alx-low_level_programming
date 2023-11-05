#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Computes the length of a string, nullbyte excluded
 * @str: The string whose length is computed
 * Return: Length of string (an integer)
 */
int _strlen(char *str)
{
	int str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	return (str_len);
}

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The string to append
 * Return: A pointer to new memory block with concatenated string
 * NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, str_len1, str_len2;
	char *ptr;

	str_len1 = _strlen(s1);
	str_len2 = _strlen(s2);

	ptr = malloc(str_len1 + str_len2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
