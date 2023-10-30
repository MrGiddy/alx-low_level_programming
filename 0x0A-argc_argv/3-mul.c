#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: Number of arguments
 * @argv: An array of strings (the arguments)
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);

	exit(EXIT_SUCCESS);
}
