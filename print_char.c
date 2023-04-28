#include "main.h"

/**
 * print_char - print char.
 * @val: The arguments.
 * Return: succuess
 */

int print_char(va_list val)
{
	char k;

	k = va_arg(val, int);
	_putchar(k);
	return (1);
}
