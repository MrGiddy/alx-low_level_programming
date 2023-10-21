#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the copied string
 * @src: the string to copy
 * @n: number of bytes to copy from src to dest
 * Return: char * - The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
		;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}


