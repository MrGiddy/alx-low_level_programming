#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - A function that prints strings
 * @separator: A delimiter
 * @n: The number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s", "(nil)");
		}
		if (!(i == n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
