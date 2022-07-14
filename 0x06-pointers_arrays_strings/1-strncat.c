#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to char type string, we append to this
 * @src: pointer to char type string, we copy this
 * @n: the number of bytes of 'src' to be appended to 'dest'
 *
 * Return: the updated string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	for (len_dest = 0; dest[len_dest]; len_dest++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n && n > 0)
			dest[len_dest + i] = src[i];
	}
	return (dest);
}
