#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Allocates memory for and initializes a 2-d arr of ints with 0
 * @width: No. of columns
 * @height: No. of rows
 * Return: A pointer to a 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **ptr;

	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);
		if (ptr[row] == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			ptr[row][col] = 0;
		}
	}

	return (ptr);
}
