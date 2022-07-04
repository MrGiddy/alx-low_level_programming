#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int start = 0;

	for (; start <= 9; start++)
		putchar(start + '0');
	putchar('\n');
	return (0);
}
