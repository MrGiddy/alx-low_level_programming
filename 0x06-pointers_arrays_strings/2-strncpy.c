#include "main.h"

/**
 * _strncpy - Copies at most 'n' characters from 'src'to 'dest'
 * and null-pads 'dest' if 'n'is greater than the length of 'src'
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy from 'src'
 * Return: A pointer to the resulting string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	/* Calculate the length of the source string 'src' */
	for (len_src = 0; src[len_src] != '\0'; len_src++)
		;

	/* Copy at most 'n' characters from 'src'to 'dest' */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	/* Null-pad 'dest' if 'n' is greater than the length of 'src' */
	if (len_src < n)
	{
		while (len_src < n)
		{
			dest[len_src] = '\0';
			len_src++;
		}
	}

	return (dest); /* Return a pointer to the resulting string, dest */
}


