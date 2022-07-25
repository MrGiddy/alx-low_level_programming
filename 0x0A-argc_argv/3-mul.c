#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integer numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc >= 2 && !(argc > 3))
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
