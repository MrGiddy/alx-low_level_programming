#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch_counter = 'a';

	while (ch_counter <= 'z')
	{
		putchar(ch_counter);
		ch_counter++;
	}
	putchar('\n');
	return (0);
}
