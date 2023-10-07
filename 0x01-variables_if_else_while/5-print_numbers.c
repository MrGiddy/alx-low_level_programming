#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	b = 10;

	for (a = 0; a < b; a++)
	{
		printf("%d", a);
	}	
	putchar('\n');
	return (0);
}
