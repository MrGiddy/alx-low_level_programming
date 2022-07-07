/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: An integer digit 0-9
 *
 * Return: 1 if it is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57) /* ascii 0 = 48, ascii 9 = 57 */
		return (1);

	return (0);
}
