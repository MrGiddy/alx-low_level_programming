#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @k: An integer value
 *
 * Return: 0 (success)
 */
int _abs(int k)
{
	if (k < 0)
		return (k * -1);
	else
		return (k);
	return (0);
}
