/**
 * _islower - Checks for lowercase character
 * @c: a character c of type int
 *
 * Return: 1 if success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
