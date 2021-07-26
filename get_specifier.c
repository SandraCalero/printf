#include "holberton.h"
/**
 * get_specifier - selects the correct function to perform the operation asked
 * by the user
 *
 * @s: convert specifier passed as argument to the program
 * Return: a pointer to the function that corresponds to the convert specifier
 * given as a parameter. If s does not match any of the them return NULL.
 */
char (*get_specifier(char *s))(va_list)
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
		if (*s == array_specifiers[i].specifier)
			return (array_specifiers[i].f);
		i++;
	}
	return (NULL);
}
