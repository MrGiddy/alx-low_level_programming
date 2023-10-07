#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			if (x != y)
			{
				putchar(x + 48);
				putchar(y + 48);

				if (x == 8 && y == 9)
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

	return (0);
}
