#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of executed program
 * @argc: number of commandline arguments
 * @argv: an array of strings *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
