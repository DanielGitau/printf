#include "main.h"
/**
 * print_digit - handles the int format specifier
 * @num: the int to be formatted
 * Return: the num of int outputted
 **/
int print_digit(long int num)
{
	int n = 0;
	int num_digit = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -(num);
		num_digit++;
	}

	if (num >= 10)
		num_digit += print_digit(num / 10);

	n = num % 10;
	_putchar(n + '0');
	num_digit++;

	return (num_digit);
}
