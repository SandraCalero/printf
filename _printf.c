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
	va_list listVar;
	void (*fun_ptr)(va_list);
	int positionFormat;

	va_start(listVar, format);
	positionFormat = 0;
	while (format != NULL && format[positionFormat] != '\0')
	{
		if (format[positionFormat] != '%')
		{
			_putchar (format[positionFormat]);
			positionFormat++;
			continue;
		}
		fun_ptr = get_specifier(format + positionFormat + 1);
		if (fun_ptr != NULL)
		{
			fun_ptr(listVar);
			positionFormat++; /*mirar despues*/
		}
		else
			_putchar(format[positionFormat]);
		positionFormat++;
	}
	va_end(listVar);
	return (0);
}
