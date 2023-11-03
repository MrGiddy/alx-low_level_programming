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

	/* Check for valid input */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Calculate the total memory size to be allocated */
	mem_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(mem_size);

	/* Check if memory allocation was successful */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initiaze allocated memory to zero */
	for (i = 0; i < mem_size; i++)
	{
		ptr[i] = 0;
	}

	/* Return a pointer to the allocated and zero-initialized memory block */
	return (ptr);
}
