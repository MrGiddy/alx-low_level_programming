#include "search_algos.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: The value to search for in @array
 *
 * Return: The first index where value is found
 * or -1 if not found of @array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	/*
	 * If array is NULL return -1
	 * Iterate array
	 * compare current element with value
	 * if they match, return the index
	 * If no match is found, return -1
	*/
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
