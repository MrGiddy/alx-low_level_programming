#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates new memory and copies a string to it
 * @str: The string to copy to new memory block
 * Return: A pointer to the copy of the string
 */
char *_strdup(char *str)
{
	char *ptr;
	int str_len, count;

	if (!str)
	{
		return (NULL);
	}

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	ptr = malloc(str_len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (str[count] != '\0')
	{
		ptr[count] = str[count];
		count++;
	}
	ptr[count] = '\0';

	return (ptr);
}
