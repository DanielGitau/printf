#ifndef MAIN_H
#define MAIN_H
/* standard library header files*/
#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/
int print_digit(long long num);
int print_str(char *str);
int put_s(char *str);
int _printf(const char *format, ...);
void _putchar(char c);

#endif
