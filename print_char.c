#include "main.h"

/**
 * print_char - print char.
 * @val: The arguments.
 * Return: success
 */

int print_char(va_list val)
{
	char k;
	int count = 1;

	k = va_arg(val, int);
	_putchar(k);
	return (count);
}
