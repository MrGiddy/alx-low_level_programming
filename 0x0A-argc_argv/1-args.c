#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of commandline arguments less the program name
 * @argc: number of arguments
 * @argv: array of strings
 * Return: value of EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int count = 0;

	(void)argv;

	while (--argc)
	{
		if (argc == 0)
		{
			printf("%d\n", 0);
			break;
		}
		count++;
	}
	printf("%d\n", count);

	exit(EXIT_SUCCESS);
}
