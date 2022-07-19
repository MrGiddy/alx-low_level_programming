#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string
 * @needle: the substring
 *
 * Return: A pointer to the beginning of the found substring
 * , NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptrhaystack;
	char *ptrneedle;

	while (*haystack != '\0')
	{
		ptrhaystack = haystack;
		ptrneedle = needle;
		while (*haystack != '\0' && *ptrneedle != '\0' && *haystack == *ptrneedle)
		{
			haystack++;
			ptrneedle++;
		}
		if (!*ptrneedle)
		{
			return (ptrhaystack);
		}
		haystack = ptrhaystack + 1;
	}
	return ('\0');
}
