#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - A function that prints a character
 * @ch: The character to print
 * Return: Nothing.
 */
void print_char(char ch)
{
	write(1, &ch, sizeof(char));
}

/**
 * _strlen - Computes the length of a string, null byte excluded
 * @str: A string
 * Return: Length of str
 */
int _strlen(char *str)
{
	int str_len;

	for (str_len = 0; str[str_len]; str_len++)
		;

	return (str_len);
}

/**
 * print_string - A function that prints a string
 * @str: The string to print
 * Return: Length of the string
 */
void print_string(char *str)
{
	while (*str)
	{
		print_char(*str);
		str++;
	}
}

/**
 * _printf - A function that produces output according to a format
 * @format: A format string
 * Return: Number of characters printed, null byte for strings excluded
 */
int _printf(const char *format, ...)
{
	char *str;
	char ch;
	int count_char;
	va_list args;

	if (format == NULL)
		return (0);

	va_start(args, format);

	count_char = 0; /* Tracks the number of characters printed */
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				print_char(va_arg(args, int));
				count_char += 1;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				print_string(str);
				count_char += _strlen(str);
			}
		}
		else
		{
			ch = *format;
			print_char(ch);
			count_char += 1;
		}
		format++;
	}

	return (count_char);
}
