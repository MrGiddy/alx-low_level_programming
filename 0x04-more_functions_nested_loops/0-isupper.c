/**
 * _isupper - checks if a character is uppercase
 * @c: A character of type int to be tested
 *
 * Return: 0 if character is uppecase, 1 if not
 */
int _isupper(int c)
{
	char first = 'A';
	char last = 'Z';

	if (c > first && c < last)
		return (1);
	else
		return (0);
}
