#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strlen - Computes the length of a string
 * @str: The string to find length
 * Return: An integer, which is the length of the string
 */
int _strlen(const char *str)
{
	int str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	return (str_len);
}

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int num_args, i;
	char *str;

	va_start(args, format);

	num_args = _strlen(format);

	i = 0;
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s", "(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}

		if (i < num_args && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 'f'))
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
