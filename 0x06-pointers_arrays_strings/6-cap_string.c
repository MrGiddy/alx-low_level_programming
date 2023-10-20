#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 * Return: char * - A pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i, j;

	/* Declare an array of word separators */
	int word_seps[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	/* Iterate through the characters in the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Iterate through the word separators */
		for (j = 0; word_seps[j] != '\0'; j++)
		{
			/* If the first character is lowercase */
			if (i == 0 && (s[i] >= 97) && (s[i] <= 122))
			{
				/* Capitalize the first character */
				s[i] = s[i] - 32;
			}
			/* If the current character is a separator */
			if (s[i] == word_seps[j])
			{
				/* Check if the next character exists and is a lowercase letter */
				if (s[i + 1] && (s[i + 1] >= 97) && (s[i + 1] <= 122))
				{
					/* Capitalize the next character */
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s); /* Return the modified string */
}
