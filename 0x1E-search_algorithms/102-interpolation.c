
#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * interpolation_search - Searches for value in sorted array using
 * Interpolation Search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements of @array
 * @value: The value to search for
 *
 * Return: The first index where @value is found
 * -1 if value is not present in @array or if @array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)  /* If value is found at pos low == high */
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				return (low);
			}
			return (-1);
		}
		/* Calculate the interpolated position of value */
		pos = (low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low])));
		if (array[pos] == value) /* If value is found at interpolated posistion */
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		/* Go higher if value at pos is less than target */
		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			/* Go lower if value at pos is greater than target */
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	return (-1);
}
