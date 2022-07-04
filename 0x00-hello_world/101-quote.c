#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Print string to stderr
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, strlen(str), stderr);
	return (1);
}
