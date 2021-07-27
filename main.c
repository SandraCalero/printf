#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int alen, elen;
	char c = 'z';
	char *str = NULL;
/*unsigned int ui;
void *addr;*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
/* ui = (unsigned int)INT_MAX + 1024;*/
/*addr = (void *)0x7ffe637541f0;*/
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*_printf("Unsigned:[%u]\n", ui);*/
/* printf("Unsigned:[%u]\n", ui);*/
/* _printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/*_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);*/
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Lena:[%d]\n", len);
	printf("Lene:[%d]\n", len2);
/*_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");*/
	printf("START OF TEST\n");
	printf("=====================\n");
        printf("printf(NULL)  : %d\n", printf(str));
        printf("_printf(NULL) : %d\n", _printf(str));
        printf("printf(\"%\") : %d\n", printf("%"));
        printf("_printf(\"%\"): %d\n", _printf("%"));
        str = "hello, world";
        printf("=====================\n");
        printf("*****CHAR*****\n");
        printf("=====================\n");
        printf("Expected1   : %c\n", 'a');
        _printf("Actual1     : %c\n", 'a');
        elen = printf("%c\n", c);
        alen = _printf("%c\n", c);
        printf("Expected wit input c   : %i\n", elen);
        printf("Actual with input c    : %i\n", alen);
        printf("Expected4   : %cc\n", 'a');
        _printf("Actual4     : %cc\n", 'a');
        printf("Expected5   : %c\n", 53);
        _printf("Actual5     : %c\n", 53);
        printf("Expected6   : %c.\n", '\0');
        _printf("Actual6     : %c.\n", '\0');
        printf("Expected7   : %%%c\n", 'y');
        _printf("Actual7     : %%%c\n", 'y');
        printf("Expected8   : %\n");
        _printf("Actual8     : %\n");
        printf("=====================\n");
        printf("*****STRINGS*****\n");
        printf("=====================\n");
        alen = elen = 0;
        printf("Expected   : %s\n", "holberton");
        _printf("Actual     : %s\n", "holberton");
        printf("Expected   : %s$\n", "");
        _printf("Actual     : %s$\n", "");
        elen = printf("Expected   : %s\n", str);
        alen = _printf("Actual     : %s\n", str);
        elen = printf("%s", "");
        alen = _printf("%s", "");
        printf("Expected55   : %i\n", elen);
        printf("Actual55     : %i\n", elen);
        printf("Expected   : %sschool\n", "holberton");
        _printf("Actual     : %sschool\n", "holberton");
        elen = printf("Test: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
        alen = _printf("Test: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
        printf("Expected: %d\n", elen);
        printf("Actual  : %d\n", alen);
        elen = printf("Test more variables stirng %s, number %i, percent %%\n", "sample string", 789);
        alen = _printf("Test more variables stirng %s, number %i, percent %%\n", "sample string", 789);
        printf("Expected56   : %i\n", elen);
        printf("Actual56     : %i\n", alen);
	elen = printf("What happens if %i\n", INT_MAX);
	alen = _printf("What happens if %i\n", INT_MAX);
	printf("Expected: %i\n", elen);
	_printf("Actual: %i\n", alen);
	
        /*alen = _printf("%x\n", -1);*/
        /*printf("Expected57   : %i\n", elen);
        printf("%%%");*/
        return (0);
}
