#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: A string to search for substring
 * @needle: The substring to search
 * Return: A pointer to the beginning of the located substring, NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Iterate through each character in the haystack */
	for(i = 0; haystack[i] != '\0'; i++)
	{
		/* Iterate through each character in the needle */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* Compare characters in haystack and needle */
			if (haystack[i + j] != needle[j])
			{
				break; /* If characters don't match, break out of the inner loop */
			}
		}

		/* If we reached the end of needle, we found a match */
		if (needle[j] == '\0')
		{
			return (&haystack[i]); /* Return pointer to start of substring */
		}
	}

	return (NULL); /* If substring is not found */
}
