#ifndef MAIN_H
#define MAIN_H
/* standard library header files*/
#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/
int put_digit(long long num);
int putstr(char *str);
int put_digits(int num);
int put_s(char *str);
int _printf(const char *format, ...);
void putchr(char c);

#endif
