#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 * Return: char * - A pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char search_string[] = "aAeEoOtTlL";
	char encoding_string[] = "4433007711";

	i = 0;
	/* Iterate through the characters in the input string 's' */
	while (s[i])
	{
		j = 0;
		/* Iterate through the characters in the search_string */
		while (search_string[j])
		{
			/* If the character in 's' matches a character in search_string */
			if (s[i] == search_string[j])
			{
				/* Replace it with the corresponding character for encoding string */
				s[i] = encoding_string[j];
			}
			j++;
		}

		i++;
	}

	return (s); /* Return the modified/encoded string */
}
