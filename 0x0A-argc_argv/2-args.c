#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: The number of arguments
 * @argv: An array of strings (the arguments received)
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	(void) argc;
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	exit(EXIT_SUCCESS);
}
