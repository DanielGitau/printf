
#ifndef MAIN_H
#define MAIN_H

/* standard library header files*/
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/
int print_Hexa(unsigned int num);
int print_hexa(unsigned int num);
int print_oct (unsigned int num);
int print_unsigned(unsigned int num);
int print_digit(long int num);
int print_str(char *str);
int put_s(char *str);
int _printf(const char *format, ...);
void _putchar(char c);
int print_bin(unsigned int num);
int print_hexa_helper(unsigned long int num);
int print_pointer(void *ptr);

#endif
