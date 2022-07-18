#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a char type memory area
 * @b: a char type to fill the memory area s
 * @n: first n bytes to fill in memory area s
 * Return: A pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; (i < n); i++)
	{
		s[i] = b;
	}
	return (s);
	_putchar('\n');
}
