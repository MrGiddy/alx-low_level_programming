#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initializes it with a special char
 * @size: The size of the array to create
 * @c: The special char
 * Return: Pointers to an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	ptr[i] = '\0';

	return (ptr);
}
