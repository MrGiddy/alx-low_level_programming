#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			for (z = y; z < 10; z++)
			{
				if (x != y && x != z && y!= z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (x == 7 && y == 8 && z == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}

	return (0);
}
