# C - Our own printf

This project is about making our own printf function which emulates the basic functionality and conversion specifier of printf the C standard library. Our function is called _printf and prints the input string while formatting and printing the the optional variables inputted.

The intention of this project is an application of the knowledge of C programming, while it does not intend to be a competition of the printf in the C standard library.

This function covers the following format specifiers:
* %s - strings
* %c - character
* %i - integers
* %d - decimal base 10
* %% - percentage symbol

## Flowchart Of Our Own _printf Function

![alt text](https://lucid.app/publicSegments/view/d45e4dd8-0fdc-4d55-963e-0b45ee4d5b2c/image.jpeg)

## Installation
There is no installation process required, although user needs download the function files and header file in order to compile.
User must download the following files in an empty folder and must not add any other file except the main.c created by the user due to the compilation command requirements.

### Files to download
* _printf.c - Prints to standard output according to a format as the selected conversion specifiers.
* _putchar.c - Writes a character to standard output.
* get_specifier.c - Selects the corresponding function according to the selected conversion specifier.
* print_char.c - Prints a char to standard output
* print_integer.c - Prints an integer to standard output.
* print_percent.c - Prints a percentage symbol to standard output.
* print_string.c - Prints the string to standard output.
* strlen.c - Returns the length of a string.
* holberton.h - The header file that contains the prototype of all functions and the creates the structure of a list of the conversion specifiers where the firs element is a pointer to the string with the conversion specifier and the second is a pointer to the corresponding function.

User must create a main.c file which will be explained later below.

## Compilation
Once the main.c is created and calling the function _printf, the compilation process must be done as following:

```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
$ ./a.out
```

## Usage
Once the files are downloaded, create a main.c file that runs the program, open a text editor and save the file as "main.c"

To explain the parameters the function receives lets take a look at the functions prototype:
```c
int _printf(const char *format, ...)
```
The input of the function is a string, so after the opening brace '(' of the function, the user must start the string with the double quotes ("), the type the string that the user wants to print. Every time the user wants use a conversion specifier, the percentage symbol (%) must be used followed be the desired conversion specifier.

To end what wants to be printed, close with double quotes(") followed by a coma (,). At this point the user must write the corresponding arguments of the conversion specifiers used in corresponding type and order. It's expected that the variable types are corresponding to the conversion specifier used.

Finally the closing brace ')' must be placed after the last variable argument.

In conclusion:

This function receives as input a constant string of characters, which may or may not contain conversion specifiers that allow printing an argument that is given to the function as the next parameter.


The overall syntax of the conversion specification is:
```c
   %[conversion specifier]
```
Generic example:
```c
    /* %cs = conversion specifier */
    _printf("Regular text %cs1 other text %cs2, and so on", Arg1, Arg2, ...);
```
The return value of the function is an integer where:

* For success _printf function returns the number of characters sent to the standard output (not counting the null byte to end a string).

* If format is NULL, or the null byte is the next character to the conversion specifier (%); return integer (-1).

Examples will be shown for each of the conversion specifiers.
### Example for simple printing:
```c
#include "holberton.h"

int main(void)
{
    /* Prints "Hello World!" followed by a new line and returns integer 13 */
    _printf("Hello World!\n");
    return (0);
}
```
Output:
```bash
$./a.out
Hello, World!
```
### Example for %c conversion specifier
```c
#include "holberton.h"

int main(void)
{
    _printf("This is a character: %c\n", 'H');
    return (0);
}
```
Output
```bash
$./a.out
This is a character: H
```


### Example for %s conversion specifier

```c
#include "holberton.h"

int main(void)
{
    _printf("This is a string: %s\n", "Hello, World!");
    return (0);
}
```
Ouput
```bash
$./a.out
This is a string: Hello, World!
```

### Example for %d conversion specifier
```c
#include "holberton.h"

int main(void)
{
    _printf("This is a number %d\n", 98);
    return (0);
}
```
Output:
```bash
$./a.out
This is a number 98
```


### Example for %i conversion specifier
```c
#include "holberton.h"

int main(void)
{
    _printf("This is a number %i\n", 99);
    return (0);
}
```
Output:
```bash
$./a.out
This is a number 99
```


### Example for %% conversion specifier
```c
#include "holberton.h"

int main(void)
{
    _printf("This is a percentage symbol: %%\n");
    return (0);
}
```
Output:
```bash
$./a.out
This is a percentage symbol: %
```
### Return value example
This example will show the return value of _printf. As mentioned before, _printf returns an integer with the number of chars printed.

```c
#include "holberton.h"
int main(void)
{
	int len;
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
    return (0);
}
```
Output:
```
$./a.out
Let's try to printf a simple sentence.
Length:[39, 39]
Percent:[%]
Len:[12]
```
## Contributing
This is a purely academic project for Holberton School. It cannot be modified and there will be no pull requests.

## Authors
Mateo Garcia - [twitter](https://twitter.com/mateog91) - [linkedin](https://www.linkedin.com/in/mateog91/)

Sandra Calero - [twitter](https://twitter.com/SandraC59631923) - [linkedin](https://www.linkedin.com/in/sandra-liliana-calero/)

Project for [Holberton School](https://www.holbertonschool.com/)

