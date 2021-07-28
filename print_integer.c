#include "holberton.h"

/**
 * print_integer - prints an integer to standard output.
 * @list: list of variadic function
 *
 * Return: Length of the interger being printed.
 */
int print_integer(va_list list)
{
	int n = va_arg(list, int);
	int count = 0;
	unsigned int i, current_digit;

	/* Edge case n is cero */
	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	/* Case for negative integer: print '-' and turn int to positive */
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = n * (-1);
	}
	/* Finds the power of the integer*/
	for (i = 1; n / i > 9; i = i * 10)
	{
	}
	/* Prints each digit */
	for (; i > 0; i = i / 10)
	{
		current_digit = n / i;
		n = n % i;
		_putchar('0' + current_digit);
		count++;
	}
	return (count);
}
