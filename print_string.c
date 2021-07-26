#include "holberton.h"
/**
 *  printstr - prints a string
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void printstr(va_list s)
{
	int c;
	char *str;
	str = va_arg(s, char*);
	/*if (str == NULL)
	  {
	  return("(null)");
	  }*/
	for (c = 0 ; c[str] != '\0' ; c++)
	{
		_putchar(c[str]);
	}
	_putchar('\n');
}
