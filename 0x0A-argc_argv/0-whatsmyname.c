#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: Number of command line arguments
 * @argv: An array of strings, which are the arguments
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
