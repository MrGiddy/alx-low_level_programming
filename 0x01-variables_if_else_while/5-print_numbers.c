#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints single digits of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;

	do {
		printf("%d", a);
		a++;
	} while (a < 10);
	printf("\n");
	return (0);
}
