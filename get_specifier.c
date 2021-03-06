#include "holberton.h"

/**
 * get_specifier - selects the corresponding to the according to the selected
 * conversion specifier.
 * @s: convert specifier passed as argument to the program.
 *
 * Return: A pointer to the function that corresponds to the convert specifier
 * given as a parameter. If @s does not match any of the them return NULL.
 */
int (*get_specifier(const char *s))(va_list)
{
	list_specifiers array_specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
		};
	int i = 0;
	int len;

	for (len = 0 ; array_specifiers[len].specifier != NULL ; len++)
		;
	while (i < len)
	{
		if (*s == *array_specifiers[i].specifier)
			return (array_specifiers[i].f);
		i++;
	}
	return (NULL);
}
