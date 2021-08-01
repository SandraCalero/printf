#include "holberton.h"

/**
 * print_binary - converts an interger into binary and prints it
 * @list: Variables from variadic function
 *
 * Return: Count of number of times printed
 */
int print_binary (va_list list)
{
    int n = va_arg(list, int);
    /* Define variables */
    long long binary = 0;
    int temporary, remainder, i = 1;

    /*
     * Get the remainder of current digit of n (temporary value) update
     * temporary value by
     */
    for(temporary = n; temporary != 0; temporary)
    {
        remainder = temporary % 2;
        temporary = temporary / 2;
        binary += remainder * i;
        i = i * 10;
    }

    printf("Input number %i is binary %i\n", n, binary);

    return (print_long(binary));

}

/**
 * print_long - prints a long long type of number
 * @n: Input number of type long long
 *
 * Description: variant of print_int to be able to print type long long
 * 
 * Return: Number of times it printed.
 */

int print_long(long long  n)
{
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

