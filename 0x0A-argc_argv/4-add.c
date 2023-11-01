#include <stdio.h>
#include <stdlib.h>

/**
 * main - addds positive numbers
 * @argc: Number of arguments
 * @argv: An array of strings (arguments)
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	int g, h, i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}

	for (g = 1; g < argc; g++)
	{
		for (h = 0; argv[g][h] != '\0'; h++)
		{
			if (!((argv[g][h] <= 57) && (argv[g][h] >= 48)))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
