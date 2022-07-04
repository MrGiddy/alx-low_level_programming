#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m = 0;

	for (; m <= 9; m++) 
	{
		putchar(m + '0');
		if (m < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
