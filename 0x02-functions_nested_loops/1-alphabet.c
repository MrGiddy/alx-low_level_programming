#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char go, end;

	go = 'a';
	end = 'z';

	while (go <= end)
	{
		_putchar(go);
		go++;
	}
	_putchar('\n');
}
