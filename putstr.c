#include "main.h"
/**
 * putstr - handles the specifier for string
 * @str: a pointer to the string
 * Return: the num of char outputted
 **/

int putstr(char *str)
{
	int i = 0, r_value = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		r_value++;
		i++;
	}
	_putchar('\n');
	return (r_value);
}
