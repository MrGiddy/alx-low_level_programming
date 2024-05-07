#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searches a value in sorted array using Binary Search algrthm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for in @array
 *
 * Return: The index where value is found
 * -1 if value is not found or if @array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);

		mid = (low + high) / 2;

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
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
