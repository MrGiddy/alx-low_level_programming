/**
 * _strchr - searches for a character in a string
 * @s: the input string
 * @c: the character to search for
 *
 * Return: A pointer to the first occurrence of c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
