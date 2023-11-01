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
	/* Declare variables for loop counters and a variable to hold the sum */
	int g, h, i, sum;

	/* Initialize sum to 0 */
	sum = 0;

	/* Check if there are no command line arguments provided */
	if (argc == 1)
	{
		/* Print the sum (which is 0) and exit */
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}

	/* Loop through the command line arguments (excluding the program name */
	for (g = 1; g < argc; g++)
	{
		/* Loop through the characters of the current argument */
		for (h = 0; argv[g][h] != '\0'; h++)
		{
			/* Check if the character is not a digit (0-9) */
			if (!((argv[g][h] <= 57) && (argv[g][h] >= 48)))
			{
				/* If an non-digit char is found, print "Error", return 1 */
				printf("Error\n");
				return (1);
			}
		}
	}

	/* Loop through the command line arguments */
	for (i = 1; i < argc; i++)
	{
		/* Convert each argument to an integer and add it to sum */
		sum += atoi(argv[i]);
	}

	/* Pring the final sum */
	printf("%d\n", sum);

	/* Exit the program with a succesful status code */
	exit(EXIT_SUCCESS);
}
