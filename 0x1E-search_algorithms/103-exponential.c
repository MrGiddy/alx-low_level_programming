#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int binary_search_exp(int *array, size_t low,
		size_t high, size_t size, int value);

/**
 * min - Finds the mininum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The least between @a and @b
*/
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * exponential_search - Searches for value in sorted array using
 * exponential search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 * -1 if value is not found or if @array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t exp, low, high, pos;

	if (!array)
		return (-1);

	/* If value is at first index of array */
	if (array[0] == value)
		return (0);

	/* Find the range/subarray for binary search */
	exp = 1;
	while (exp < size && array[exp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp = exp * 2;
	}

	low = exp / 2;
	high = min(exp, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	/* Searching the range/subarray for the position of value */
	pos = binary_search_exp(array, low, high, size, value);
	if ((int)pos == -1)
		return (-1);
	return (pos);
}

int print_array(int *array, size_t low, size_t high);

/**
 * binary_search_exp - Searches a value in sorted subarray using
 * Binary Search algorithm
 * @array: Pointer to the first element of the array to search
 * @low: Lower bound of subarray to search
 * @high: Upper bound of subarray to search
 * @size: Number of elements in @array
 * @value: The value to search for in the subarray
 *
 * Return: The index where value is found
 * -1 if value is not found or if @array is NULL
*/
int binary_search_exp(int *array, size_t low,
		size_t high, size_t size, int value)
{
	size_t mid;

	(void)size;

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
