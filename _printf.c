#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - prints to standard output according to a format as the selected
 * conversion specifiers
 * @format: pointer to a string with conversion specifiers
 *
 * Return: Length of the string that prints. If @format is NULL, return -1.
 * If the null byte is next to a percentage symbol return -1.
 */
int _printf(const char *format, ...)
{
	va_list listVar;
	int (*fun_ptr)(va_list);
	int positionFormat, len;

	if (format == NULL)
		return (-1);
	va_start(listVar, format);
	positionFormat = 0;
	len = 0;
	while (format[positionFormat] != '\0')
	{
		if (format[positionFormat] != '%')
		{
			_putchar (format[positionFormat]);
			positionFormat++;
			len++;
			continue;
		}
		if (format[positionFormat + 1] == '\0')
		{
			return (-1);
		}
		fun_ptr = get_specifier(format + positionFormat + 1);
		if (fun_ptr != NULL)
		{
			len = len + fun_ptr(listVar);
			positionFormat++;/*Go to position conversion specifier*/
		}
		else
		{
			_putchar(format[positionFormat]);
			len++;
		}
		positionFormat++;
	}

	va_end(listVar);
	return (len);
}
