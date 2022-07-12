/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Description: @s is a points to the address of the first
 * character of string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}
