#include "main.h"

/**
 * main - prints 1-100
 *
 * Description: Prints 'Fizz' in place of multiples of three,
 * 'Buzz' in place of multiples of five and 'FizzBuzz' in
 * place of multiples of both three and five
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	for (; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))

			printf("FizzBuzz");

		else if (i % 3 == 0)

			printf("Fizz");

		else if (i % 5 == 0)

			printf("Buzz");

		else

			printf("%d", i);

		if (i != 100)

			printf(" ");
	}

	printf("\n");
	return (0);
}
