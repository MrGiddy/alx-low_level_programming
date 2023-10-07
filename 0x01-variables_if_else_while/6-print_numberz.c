#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 10;

	for (; a < b; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
