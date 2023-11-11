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
 * comma_delimiter - deparates arguments with commas
 * @num_args: number of arguments
 * @format: A string of format specifiers
 * @i: A counter variable
 */
void comma_delimiter(int num_args, const char *format, int i)
{
	int n;
	const char *s;

	n = num_args;
	s = format;

	if (i < n - 1 && (s[i] == 'c' || s[i] == 'i' || s[i] == 'f' || s[i] == 's'))
	{
		printf(", ");
	}
}

/**
 * print_all - A function that prints anything
 * @format: A string of format specifiers
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int num_args, i;
	char *str;

	va_start(args, format);
	i = 0;
	while (format && format[i])
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
		num_args = _strlen(format);
		comma_delimiter(num_args, format, i);
		i++;
	}
	printf("\n");
	va_end(args);
}
