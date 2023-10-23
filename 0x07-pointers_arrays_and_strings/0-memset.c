#include "main.h"

/**
 * _memset - Function that fills a memory area with a constant byte
 * @s: The memory area
 * @b: A constant byte
 * @n: Number of bytes to fill with
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
