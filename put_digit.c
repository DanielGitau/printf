#include "main.h"
/**
 * put_digit - handles the int format specifier
 * @num: the int to be formatted
 * Return: the num of int outputted
 **/
int put_digit(long long num)
{
	int n = 0;
	int num_digit = 0;

	if (num < 0)
	{
		putchr('-');
		num = -(num);
		num_digit++;
	}

	if (num >= 10)
		num_digit += put_digit(num / 10);

	n = num % 10;
	putchr(n + '0');
	num_digit++;

	return (num_digit);
}
