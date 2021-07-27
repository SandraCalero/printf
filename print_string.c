#include "holberton.h"
/**
 *  print_str - prints a string
 *
 * @s: a pointer to a string we want to print
 * Return: if str is NULL return length of the valriable null
 * if not, return the length of the string.
 */
int print_str(va_list s)
{
	int i, c, len;
	char *str;
	char *null;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		null = "(null)";
		for (i = 0 ; null[i] != '\0' ; i++)
			_putchar(null[i]);
		len = _strlen(null);
	}
	else
	{
		for (c = 0 ; str[c] != '\0' ; c++)
			_putchar(str[c]);
		len = _strlen(str);
	}
	return (len);
}
