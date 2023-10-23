#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy from src to dest
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
