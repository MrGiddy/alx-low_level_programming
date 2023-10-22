#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: an array of integers
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through at most 'n' elements of the array */
	for (i = 0; i < n; i++)
	{
		/* Check of it's not the first element */
		if (i && i < n)
		{
			/* Print a comma and space before the element */
			printf(", ");
		}
		/* Print the element, first or otherwise */
		printf("%d", a[i]);
	}
	/* Print a new line at the end for proper formatting */
	printf("\n");
}
