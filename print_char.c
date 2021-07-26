#include "holberton.h"
/**
 *printchar - prints a char
 *@c: char argument of the list
 */
void printchar(va_list c)
{
	_putchar(va_arg(c, int));
}
