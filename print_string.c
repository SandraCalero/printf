#include "holberton.h"
/**
 *  print_str - prints a string
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void print_str(va_list s)
{
	int c;
	char *str;

	str = va_arg(s, char*);
	/*
	 * if (str == NULL)
	 * {
	 * return("(null)");
	 * }
	 */
	for (c = 0 ; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
