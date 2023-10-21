#include "main.h"
#include <stddef.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, mid_index;
	int temp;

	if (n % 2 == 0)
	{
		mid_index = n / 2;
	}
	else
	{
		mid_index = (n / 2) + 1;
	}

	i = 0;
	while (i < mid_index)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}

/**
 *      0  1  2  3  4
 * a = [1, 2, 3, 4, 5, \0]
 *
  * if n is odd
 * 	mid_index = (length / 2) + 1
 * if n is even
 * 	mid_index  = length / 2 
 *
 * initialize i = 0
 * while i <= mid_index
 *	a[i] = a[length - 1]
 *	INCREMENT i
 *	DECREMENT length
 *
 */
