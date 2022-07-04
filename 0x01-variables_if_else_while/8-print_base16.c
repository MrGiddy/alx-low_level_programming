#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all base 16 numbers in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first = 0;
	int last = 9;
	char i = 'a';

	for (; first <= last; first++)
		putchar(first + '0');
	for (; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
