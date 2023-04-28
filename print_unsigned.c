#include "main.h"
/**
 * print_unsigned - handles the int format specifier
 * @num: the int to be formatted
 * Return: the num of int outputted
g **/
int print_unsigned(unsigned int num)
{
	int digit, temp, count, end, expo;

	expo = 1;
	count = 0;
	end = num % 10;

	if (end < 0)
	{
		_putchar('-');
		count++;
		num = -num;
		end = -end;
	}
	num = num / 10;
	temp = num;

	if (temp > 0)
	{
		while (temp / 10 != 0)
		{
			expo = expo * 10;
			temp = temp / 10;
		}
		temp = num;

		while (expo > 0)
		{
			digit = temp / expo;
			_putchar(digit + '0');
			temp = temp - (digit * expo);
			expo = expo / 10;
			count++;
		}
	}
	_putchar(end + '0');
	count++;

	return (count);
}
