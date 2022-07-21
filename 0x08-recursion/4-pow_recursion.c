/**
 * _pow_recursion - returns x raised to power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: -1 if y < 0, result of x raised to y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
