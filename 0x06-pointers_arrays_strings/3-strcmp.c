/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Description: This function works exactly like strcmp
 * Return: 0 if strings are the same,
 * positive if s1 if greater, negative is s2 is greater
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
