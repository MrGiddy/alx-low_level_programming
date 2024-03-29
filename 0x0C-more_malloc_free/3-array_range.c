#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - A function that creates an array of integers
 * @min: Mininum value
 * @max: Maximum value
 * Return: Pointer to the newly created array
 * If min > max, NULL
 * If malloc fails, NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
