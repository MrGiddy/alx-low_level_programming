#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int binary_search_recursion(int *array, size_t size, size_t low, size_t high,
							int value);

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements of @array
 * @value: The value to search for
 *
 * Return: The index of the first value in @array
 * -1 if value is not present in @array or if @array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	return (binary_search_recursion(array, size, low, high, value));
}

int print_array(int *array, size_t low, size_t high);

/**
 * binary_search_recursion - Recursive implementation of
 * binary search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @low: The lower index of array/subarray
 * @high: The higher index of array/subarray
 * @value: The value to serch for
 *
 * Return: The index of the first @value in array
 * -1 if @value is not found or if @array is NULL
*/
int binary_search_recursion(int *array, size_t size, size_t low, size_t high,
							int value)
{
	int mid;

	if (!array)
		return (-1);

	/* If target value is not found in array */
	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		/* Make sure mid is the index for the leftmost occurrence of value */
		if (mid > 0 && array[mid - 1] == value)
		{
			high = mid;
			return (binary_search_recursion(array, size, low, high, value));
		}
		return (mid);
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
		return (binary_search_recursion(array, size, low, high, value));
	}
	else /* If array[mid] < value */
	{
		low = mid + 1;
		return (binary_search_recursion(array, size, low, high, value));
	}

	return (-1);
}

/**
 * print_array - Prints the array being searched every time it changes
 * @array: The array/subarray
 * @low: The index of the first element of the array/subarray
 * @high: The index of the last element of the array/subarray
 *
 * Return: EXIT_SUCCESS;
*/
int print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
