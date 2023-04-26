#include "main.h"
/**
 * put_s - outputs unformatted string
 * @str: a string to be outputted
 * Return: the num of char printed
 **/
int put_s(char *str)
{
	int i = 0, r_value = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		r_value++;
		i++;
	}

	return (r_value);
}
