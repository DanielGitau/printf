#include "main.h"
/**
 * print_int - handles the int format specifier
 * @args: the int to be formatted
 * Return: the num of int outputted
g **/
int print_int(va_list args)
{
	long int num = va_arg(args, int);
	int digit, temp, count, end, expo;

	expo = 1;
	count = 0;
	
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	end = num % 10;
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

	return(count);
}
