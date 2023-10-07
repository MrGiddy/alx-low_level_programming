#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char go, last;

	go = 'a';
	last = 'z';

	while (go <= last)
	{
		if (go == 'e' || go == 'q')
		{
			go++;
			continue;
		}
		else
		{
			putchar(go);
			go++;
		}
	}
	putchar('\n');

	return (0);
}
