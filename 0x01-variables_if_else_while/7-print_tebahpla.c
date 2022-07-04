#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase letters in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	for (; z >= a; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
