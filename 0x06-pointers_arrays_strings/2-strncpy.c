/**
 * _strncpy - copies a string into a buffer
 * @dest: where to copy into
 * @src: the string to copy
 * @n: the number of characters of 'src' to copy into 'dest'
 * Return: the copy of string 'src'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n && n > 0)
			dest[i] = src[i];
	}

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
