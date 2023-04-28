
#ifndef MAIN_H
#define MAIN_H

/* standard library header files*/
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct specifier - recognizes a specified conversion
 * type and calss the its function
 * @op: pointer to datatype char
 * @f: a function pointer
 **/
typedef struct specifier
{
	char *op;
	int (*f)();
} convertType;

/*function prototypes*/

int print_digit(va_list args);
int print_str(va_list args);
int put_s(char *str);
int _printf(const char *format, ...);
void _putchar(char c);
int print_hexa(va_list val);
int print_Hexa(va_list val);
int print_char(va_list val);
int print_bin(va_list args);
int print_oct(va_list value);
int print_percent(void);

#endif
