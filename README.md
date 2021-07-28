# C - Our own printf
This is the project of our own printf function which emulates the basic functionality and conversion specifier of printf

The intention of this project is an aplication of the knowledge of C programming, while it does not intend to be a competition of the printf in standard library.

This function will cover the following format specifiers:
* %s - strings
* %c - character
* %i - integers
* %d - decimal base 10
* %% - percentage symbol

## Flowchart
![alt text](https://lucid.app/publicSegments/view/d45e4dd8-0fdc-4d55-963e-0b45ee4d5b2c/image.jpeg)

## Installation
There is no installation process required, although you do need to have the file functions and directory in order to compile
User must download the following files in an empty folder and must not add any other file except the main.c created by the user due to the compilation command requirements.

### Files to download
* _printf.c
* _putchar.c
* get_specifier.c
* print_char.c
* print_integer.c
* print_percent.c
* print_string.c
* strlen.c
* holberton.h

User must create a main.c file

#### _printf.c

Prints to standard output according to a format as the selected conversion specifiers.

#### _putchar.c
Writes a character to standard output.
 
#### get_specifier.c
Selects the corresponding to the according to the selected conversion specifier.

#### print_char.c
Prints a char to standard output

#### print_integer.c
Prints an integer to standard output.

#### print_percent.c
Prints a percentage symbol to standard output.

#### print_string.c
Prints the passed to standard output.

#### strlen.c
Returns the length of a string.

#### holberton.h
The header file that contains the prototype of all functions and the creates the structure of a list of the conversion specifiers where the firs element is the string with the conversion specifier and the second is a pointer to the corresponding function.

## Usage
Once the files are downloaded, create a main.c file that runs the program
```c
#include "holberton.h"

int main(void)
{
    /* Prints "Hello World!" followed by a new line and returns integer 13 */
    _printf("Hello World!\n");
    return (0);
}
```
## Compilation
Once the main.c is created and calling the function _printf, the compilation process must be done as following:

```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
$ ./a.out
```
## Contributing
???

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors
Mateo Garcia - Sandra Calero

Project for [Holberton School](https://www.holbertonschool.com/)
