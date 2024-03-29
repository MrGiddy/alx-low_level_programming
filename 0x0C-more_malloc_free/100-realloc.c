#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc(old_size)
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The size, in bytes, of the new memory block
 * Return: Nothing - (void *)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
