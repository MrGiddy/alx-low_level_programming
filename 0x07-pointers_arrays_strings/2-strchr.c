#define NULL 0
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
	int i, j = 0;

	while (s[j])
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
