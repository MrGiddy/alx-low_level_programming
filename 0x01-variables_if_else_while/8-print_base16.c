#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char num_parts, alpha_parts;

	for (num_parts = 0; num_parts < 10; num_parts++)
	{
		putchar(num_parts + 48);
	}
	
	for (alpha_parts = 'a'; alpha_parts < 'g'; alpha_parts++)
	{
		putchar(alpha_parts);
	}
	putchar('\n');

	return (0);
}
