/**
 * string_toupper - converts all lowercase letters
 * of a string to uppercase
 * @str: the string in question
 * Return: the changed string 'str'
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
