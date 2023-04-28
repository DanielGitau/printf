#include "main.h"

/**
 * print_pointer - prints a memory address
 * @val: The arguments.
 * Return: count
 */

int print_pointer(void *ptr)
{
	char *str = "(nil)";
	long int c;
	int d;
	int j;

	if (ptr = NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		return (j);
	}
	c = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	d = print_hexa_helper(c);
	return (d + 2);
}
