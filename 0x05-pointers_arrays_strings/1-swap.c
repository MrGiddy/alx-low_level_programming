/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer type
 * @b: integer pointer type
 *
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
