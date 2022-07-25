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
	long int i, res = 1;

	if (argc > 1 && !(argc > 3))
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}

		printf("%ld\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
