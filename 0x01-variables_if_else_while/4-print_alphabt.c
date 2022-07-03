#include <stdio.h>
/**
 * main - Entry point
 *
 * Desctiption: Prints all lowercase alphabest except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char counter = 'a';

	for (; counter <= 'z'; counter++)
	{
		if (counter == 'q' || counter == 'e')
			continue;
		else
			putchar(counter);
	}
	putchar('\n');
	return (0);
}
