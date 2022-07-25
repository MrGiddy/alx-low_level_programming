#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integer numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int res;

	if (argv[1] && argv[2])
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
