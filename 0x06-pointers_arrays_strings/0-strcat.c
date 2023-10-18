#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the resulting string
 * @src: the string to append
 * Return: A pointer to the resultant dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest, len_src;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
		;

	for (i = 0; i < len_src; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
