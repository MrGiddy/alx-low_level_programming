#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: Number of arguments passed to main
 * @argv: An array of strings
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
		exit(EXIT_SUCCESS);
	}
	printf("%d\n", 0);
	exit(EXIT_SUCCESS);
}
