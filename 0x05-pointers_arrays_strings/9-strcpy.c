/**
 * _strcpy - copies string pointed to by pointer, including '\0'
 * @dest: char type pointer to buffer
 * @src: char type pointer to string to be copied
 * *Description: copy the string pointed to by "src"
 * to a buffer pointed to by "dest"
 * Return: the pointer to "dest"
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
