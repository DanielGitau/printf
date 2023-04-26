#include "main.h"
/**
 * print_str - handles the specifier for string
 * @str: a pointer to the string
 * Return: the num of char outputted
 **/

int print_str(char *str)
{
	int i = 0, r_value = 0;

	if (str == NULL)
	{
		r_value += put_s("(null)");
	}

	else
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			r_value++;
			i++;
		}
	return (r_value);
}
