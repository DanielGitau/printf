#ifndef MAIN_H
#define MAIN_H

/* standard library header files*/
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/

int print_digit(long int num);
int print_str(char *str);
int put_s(char *str);
int _printf(const char *format, ...);
void _putchar(char c);
int print_bin(unsigned int num);
int print_hexa(va_list val);
int print_Hexa(va_list val);
int print_char(va_list val);

#endif
