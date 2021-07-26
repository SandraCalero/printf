#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - produce output according to a format as the selected conversion
 * specifiers
 * @format: pointer to a string with conversion specifiers
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	list_specifiers array_specifiers[] = {
			{"c", print_char},
			{"s", print_str},
			{"%", print_percent},
			{"d", print_integer},
			{"i", print_integer},
			{NULL, NULL}
		};
	va_list listVar;
	void (*fun_ptr)(va_list);
	int positionFormat, positionArray, len;

	va_start(listVar, format);
	for (len = 0 ; array_specifiers[len].specifier != NULL ; len++)
		;
	positionFormat = 0;
	while (format != NULL && format[positionFormat] != '\0')
	{
		if (format[positionFormat] != '%')
		{
			_putchar (format[positionFormat]);
			positionFormat++;
			continue;
		}
		positionArray = 0;
		while (positionArray < len)
		{
			if (format[positionFormat + 1] ==
			   *(array_specifiers[positionArray].specifier))
			{
				fun_ptr = array_specifiers[positionArray].f;
				fun_ptr(listVar);
				positionFormat++; /*mirar despues*/
				break;
			}
			positionArray++;
		}
		if (positionArray == len)
		{
			_putchar(format[positionFormat]);
		}
		positionFormat++;
	}
	va_end(listVar);
	return (0);
}
