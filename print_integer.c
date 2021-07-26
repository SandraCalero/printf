/**
 * print_integer - prints the passed integer from the variadic function
 * @list: list of variadic function
 *
 * Return: 0 if success
 */

void print_integer(va_list list)
{
	int n = va_arg(list, int);
	unsigned int i, current_digit;

	/* Edge case n is cero */
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	/* Case for negative integer: print '-' and turn int to positive */
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	/* Finds the power of the integer*/
	for (i = 1; n / i > 9; i = i * 10)
	{
	}
	/* Prints each digit */
	for (i; i > 0; i = i / 10)
	{
		current_digit = n / i;
		n = n % i;
		_putchar('0' + current_digit);
	}
	/* Prints new line when finished */
	_putchar('\n');
	return (0);
}
