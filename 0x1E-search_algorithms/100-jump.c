#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for value in sorted array using Jump Search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 * -1 if value is not present in @array or of @array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, block_size;

	if (!array || size == 0)
		return (-1);

	block_size = sqrt(size);
	low = 0;
	high = 0;

	/* Jump phase */
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high = high + block_size;

		if (high >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	/* Linear search in the block */
	while (low <= high && high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low = low + 1;
	}
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);

	return (-1); /* If value is not found */
}
