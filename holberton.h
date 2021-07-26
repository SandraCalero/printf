#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct list - structure of format which receives the _printf function
 * @specifier: character that represent the format specifier
 * @f: Pointer to a function associated to the format specifier
 */

typedef struct list
{
	char *specifier;
	void (*f)();
} list;

int _putchar(char c);
int _printf(const char *format, ...);
void print_str(va_list s);
void print_char(va_list c);
void print_str(va_list s);
void print_percent(void);

#endif /* HOLBERTON_H */
