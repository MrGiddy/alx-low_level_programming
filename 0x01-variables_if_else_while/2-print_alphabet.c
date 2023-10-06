#include <stdio.h>

/*
 * let char go = a
 * let char last = z
 *
 * while go < last
 *	putchar go
 *	go++
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char go, last;

	go = 'a';
	last = 'z';

	while (go < last)
	{
		putchar(go);
		go++;
	}
	putchar('\n');

	return (0);
}
