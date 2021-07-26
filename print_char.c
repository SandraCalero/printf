#include "holberton.h"
/**
 *print_char - prints a char
 *@c: char argument of the list
 */
void print_char(va_list c)
{
	_putchar(va_arg(c, int));
}
