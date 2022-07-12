#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: int type pointer to an array
 * @n: the number of elements of the array to be printed
 *
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
