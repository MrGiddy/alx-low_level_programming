#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where to copy into
 * @src: where to copy from
 * @n: number of bytes to copy from memory area 'src'
 * Return: a pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
	_putchar('\n');
}
