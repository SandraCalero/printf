#include "holberton.h"

/**
 * print_percent - prints a percentage symbol to standard output.
 * @perc: void
 *
 * Return: Length of a percentage
 */
int print_percent(va_list perc)
{
	_putchar('%');
	(void) perc;
	return (1);
}
