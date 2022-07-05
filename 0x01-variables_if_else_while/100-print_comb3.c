#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: Prints all possible combinations of two digits
 * without repetition
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0, tens_digit, ones_digit;

	while (num < 100)
	{
		tens_digit = num / 10;
		ones_digit = num % 10;
		if (tens_digit < ones_digit)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');
			if (num < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
