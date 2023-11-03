#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements of array
 * @size: size of element
 * Return: A pointer to the allocated memory (set to zero)
 * NULL if nmemb or size is 0, NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int mem_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem_size = nmemb * size;
	ptr = malloc(mem_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < mem_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
