#include "holberton.h"

/**
 * print_char - prints a char to standard output
 * @c: char argument of the list
 *
 * Return: Length of a char
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
