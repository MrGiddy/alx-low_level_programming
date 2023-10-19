#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @input: the string to encode
 * Return: char * - the encoded string
 */
char *rot13(char *input)
{
	char *result;

	result = input;

	/* Iterate through each character in the input string */
	while (*input != '\0')
	{
		/* Check if the character is an alphabetic character */
		if ((*input >= 'a' && *input <= 'm') || (*input >= 'A' && *input <= 'M'))
		{
			/* Apply ROT13  transformation */
			*input += 13;
		}
		else if ((*input >= 'n' && *input <= 'z') || (*input >= 'N' && *input <= 'Z'))
		{
			/* Apply ROT13 transformation */
			*input -= 13;
		}

		input++; /* Move to the next character */
	}

	return (result);
}
