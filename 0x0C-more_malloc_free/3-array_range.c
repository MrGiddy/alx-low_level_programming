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

	if (min == 0)
	{
		size = max + 1;
	}

	if (min > 0)
	{
		size = max - min + 1;
	}

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= min; i++)
	{
		ptr[i] = i;
	}

	for (; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
