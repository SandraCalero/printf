#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list_specifiers - Structure of a list of the conversion specifiers
 * @specifier: Character with the conversion specifier
 * @f: Pointer to the corresponding function.
 */

typedef struct list_specifiers
{
	char *specifier;
	int (*f)();
} list_specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int (*get_specifier(const char *s))(va_list);
int print_str(va_list s);
int print_char(va_list c);
int print_integer(va_list list);
int print_percent(va_list perc);

#endif /* HOLBERTON_H */
