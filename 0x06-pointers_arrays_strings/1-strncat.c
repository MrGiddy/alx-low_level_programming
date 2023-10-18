#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the resulting string
 * @src: the string to append
 * @n: an integer, n - no. of src bytes to append to dest
 * Return: A pointer to the resultant string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
