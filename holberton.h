#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list_specifiers - structure of format which receives the _printf
 * function
 * @specifier: character that represent the format specifier
 * @f: Pointer to a function associated to the format specifier
 */

typedef struct list_specifiers
{
	char *specifier;
	void (*f)();
} list_specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
void (*get_specifier(const char *s))(va_list);
void print_str(va_list s);
void print_char(va_list c);
void print_integer(va_list list);
void print_percent(va_list perc);

#endif /* HOLBERTON_H */
