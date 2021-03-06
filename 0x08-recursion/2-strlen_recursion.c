/**
 * _strlen_recursion - calculates length of string using recursion
 * @s: the input string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
