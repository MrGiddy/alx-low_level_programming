#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string, we append here
 * @src: the source string, we copy this string
 * This function appends the "src" string to the "dest" string,
 * ovewriting the terminating null byte (\0) at the end of "dest"
 * Return: resulting string "dest"
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, j;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len_dest + j] = src[j];
	}

	return (dest);
}
