/**
 * _isalpha - Checks for alphabetic characters
 * @c: A character of type int
 * Description: If used, this function will check
 * if a character is a letter of the alphabet,
 * regardless is it is an uppercase or lowercase
 *
 * Return: 1 for success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
