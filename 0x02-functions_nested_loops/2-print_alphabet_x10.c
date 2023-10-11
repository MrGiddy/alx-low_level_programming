#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char go, end;
	int i;

	go = 'a';
	end = 'z';

	for (i = 0; i < 10; i++)
	{
		while (go <= end)
		{
			_putchar(go);
			go++;
		}
		go = 'a';
		_putchar('\n');
	}
}
