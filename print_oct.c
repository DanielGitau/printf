#include "main.h"
/**
 * print_oct - outputs base 8 num
 * @value: args to be formatted
 * Return: count of digit outputted
 **/
int print_oct (va_list value)
{
	int i, num, count = 0, tmp;
	char *digits;

	num = va_arg(value, int);
	tmp = num;
	if (num > 0)
	{
		num /= 8;
		count++;
	}

	digits = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		digits[i] = tmp % 8;
		tmp /= 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
	}

	free(digits);

	return (count);
}
