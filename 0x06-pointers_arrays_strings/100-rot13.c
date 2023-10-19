#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @input: the string to encode
 * Return: char * - the encoded string
 */
char *rot13(char *input_string)
{
	int i, j;

	char search_string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate_string[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; input_string[i] != '\0'; i++)
	{
		for (j = 0; search_string[j] != '\0'; j++)
		{
			if (input_string[i] == search_string[j])
			{
				input_string[i] = rotate_string[j];
				break;
			}
		}
	}
	input_string[i] = '\0'; /* Just to make sure - defensive programming */

	return (input_string);
}
